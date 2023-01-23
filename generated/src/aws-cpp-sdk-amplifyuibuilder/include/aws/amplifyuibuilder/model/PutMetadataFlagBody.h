/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>Stores the metadata information about a feature on a form or
   * view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/PutMetadataFlagBody">AWS
   * API Reference</a></p>
   */
  class PutMetadataFlagBody
  {
  public:
    AWS_AMPLIFYUIBUILDER_API PutMetadataFlagBody();
    AWS_AMPLIFYUIBUILDER_API PutMetadataFlagBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API PutMetadataFlagBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The new information to store.</p>
     */
    inline const Aws::String& GetNewValue() const{ return m_newValue; }

    /**
     * <p>The new information to store.</p>
     */
    inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }

    /**
     * <p>The new information to store.</p>
     */
    inline void SetNewValue(const Aws::String& value) { m_newValueHasBeenSet = true; m_newValue = value; }

    /**
     * <p>The new information to store.</p>
     */
    inline void SetNewValue(Aws::String&& value) { m_newValueHasBeenSet = true; m_newValue = std::move(value); }

    /**
     * <p>The new information to store.</p>
     */
    inline void SetNewValue(const char* value) { m_newValueHasBeenSet = true; m_newValue.assign(value); }

    /**
     * <p>The new information to store.</p>
     */
    inline PutMetadataFlagBody& WithNewValue(const Aws::String& value) { SetNewValue(value); return *this;}

    /**
     * <p>The new information to store.</p>
     */
    inline PutMetadataFlagBody& WithNewValue(Aws::String&& value) { SetNewValue(std::move(value)); return *this;}

    /**
     * <p>The new information to store.</p>
     */
    inline PutMetadataFlagBody& WithNewValue(const char* value) { SetNewValue(value); return *this;}

  private:

    Aws::String m_newValue;
    bool m_newValueHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
