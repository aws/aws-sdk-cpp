/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>List containing the values for the given attribute.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AttributeValueItem">AWS
   * API Reference</a></p>
   */
  class AttributeValueItem
  {
  public:
    AWS_CUSTOMERPROFILES_API AttributeValueItem();
    AWS_CUSTOMERPROFILES_API AttributeValueItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AttributeValueItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An individual value belonging to the given attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline AttributeValueItem& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline AttributeValueItem& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline AttributeValueItem& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
