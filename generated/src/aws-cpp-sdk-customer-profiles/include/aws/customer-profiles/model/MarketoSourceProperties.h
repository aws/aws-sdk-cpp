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
   * <p>The properties that are applied when Marketo is being used as a
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/MarketoSourceProperties">AWS
   * API Reference</a></p>
   */
  class MarketoSourceProperties
  {
  public:
    AWS_CUSTOMERPROFILES_API MarketoSourceProperties();
    AWS_CUSTOMERPROFILES_API MarketoSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API MarketoSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The object specified in the Marketo flow source.</p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }

    /**
     * <p>The object specified in the Marketo flow source.</p>
     */
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    /**
     * <p>The object specified in the Marketo flow source.</p>
     */
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    /**
     * <p>The object specified in the Marketo flow source.</p>
     */
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    /**
     * <p>The object specified in the Marketo flow source.</p>
     */
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    /**
     * <p>The object specified in the Marketo flow source.</p>
     */
    inline MarketoSourceProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    /**
     * <p>The object specified in the Marketo flow source.</p>
     */
    inline MarketoSourceProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    /**
     * <p>The object specified in the Marketo flow source.</p>
     */
    inline MarketoSourceProperties& WithObject(const char* value) { SetObject(value); return *this;}

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
