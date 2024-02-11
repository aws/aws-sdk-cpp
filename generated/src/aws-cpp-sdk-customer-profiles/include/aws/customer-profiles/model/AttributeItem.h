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
   * <p>The details of a single attribute item specified in the mathematical
   * expression.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AttributeItem">AWS
   * API Reference</a></p>
   */
  class AttributeItem
  {
  public:
    AWS_CUSTOMERPROFILES_API AttributeItem();
    AWS_CUSTOMERPROFILES_API AttributeItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AttributeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an attribute defined in a profile object type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an attribute defined in a profile object type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an attribute defined in a profile object type.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an attribute defined in a profile object type.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an attribute defined in a profile object type.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an attribute defined in a profile object type.</p>
     */
    inline AttributeItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an attribute defined in a profile object type.</p>
     */
    inline AttributeItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of an attribute defined in a profile object type.</p>
     */
    inline AttributeItem& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
