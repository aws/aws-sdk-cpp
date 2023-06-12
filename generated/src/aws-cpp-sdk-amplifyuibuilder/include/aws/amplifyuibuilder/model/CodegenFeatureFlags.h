/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the feature flags that you can specify for a code generation
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenFeatureFlags">AWS
   * API Reference</a></p>
   */
  class CodegenFeatureFlags
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenFeatureFlags();
    AWS_AMPLIFYUIBUILDER_API CodegenFeatureFlags(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenFeatureFlags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifes whether a code generation job supports data relationships.</p>
     */
    inline bool GetIsRelationshipSupported() const{ return m_isRelationshipSupported; }

    /**
     * <p>Specifes whether a code generation job supports data relationships.</p>
     */
    inline bool IsRelationshipSupportedHasBeenSet() const { return m_isRelationshipSupportedHasBeenSet; }

    /**
     * <p>Specifes whether a code generation job supports data relationships.</p>
     */
    inline void SetIsRelationshipSupported(bool value) { m_isRelationshipSupportedHasBeenSet = true; m_isRelationshipSupported = value; }

    /**
     * <p>Specifes whether a code generation job supports data relationships.</p>
     */
    inline CodegenFeatureFlags& WithIsRelationshipSupported(bool value) { SetIsRelationshipSupported(value); return *this;}


    /**
     * <p>Specifies whether a code generation job supports non models.</p>
     */
    inline bool GetIsNonModelSupported() const{ return m_isNonModelSupported; }

    /**
     * <p>Specifies whether a code generation job supports non models.</p>
     */
    inline bool IsNonModelSupportedHasBeenSet() const { return m_isNonModelSupportedHasBeenSet; }

    /**
     * <p>Specifies whether a code generation job supports non models.</p>
     */
    inline void SetIsNonModelSupported(bool value) { m_isNonModelSupportedHasBeenSet = true; m_isNonModelSupported = value; }

    /**
     * <p>Specifies whether a code generation job supports non models.</p>
     */
    inline CodegenFeatureFlags& WithIsNonModelSupported(bool value) { SetIsNonModelSupported(value); return *this;}

  private:

    bool m_isRelationshipSupported;
    bool m_isRelationshipSupportedHasBeenSet = false;

    bool m_isNonModelSupported;
    bool m_isNonModelSupportedHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
