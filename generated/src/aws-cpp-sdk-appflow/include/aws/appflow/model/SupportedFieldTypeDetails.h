/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/FieldTypeDetails.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Contains details regarding all the supported <code>FieldTypes</code> and
   * their corresponding <code>filterOperators</code> and
   * <code>supportedValues</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SupportedFieldTypeDetails">AWS
   * API Reference</a></p>
   */
  class SupportedFieldTypeDetails
  {
  public:
    AWS_APPFLOW_API SupportedFieldTypeDetails() = default;
    AWS_APPFLOW_API SupportedFieldTypeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SupportedFieldTypeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The initial supported version for <code>fieldType</code>. If this is later
     * changed to a different version, v2 will be introduced. </p>
     */
    inline const FieldTypeDetails& GetV1() const { return m_v1; }
    inline bool V1HasBeenSet() const { return m_v1HasBeenSet; }
    template<typename V1T = FieldTypeDetails>
    void SetV1(V1T&& value) { m_v1HasBeenSet = true; m_v1 = std::forward<V1T>(value); }
    template<typename V1T = FieldTypeDetails>
    SupportedFieldTypeDetails& WithV1(V1T&& value) { SetV1(std::forward<V1T>(value)); return *this;}
    ///@}
  private:

    FieldTypeDetails m_v1;
    bool m_v1HasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
