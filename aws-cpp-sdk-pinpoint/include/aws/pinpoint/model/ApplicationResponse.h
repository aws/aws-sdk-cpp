/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Application Response.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ApplicationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ApplicationResponse
  {
  public:
    ApplicationResponse();
    ApplicationResponse(const Aws::Utils::Json::JsonValue& jsonValue);
    ApplicationResponse& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique application ID.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique application ID.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique application ID.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique application ID.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique application ID.
     */
    inline ApplicationResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique application ID.
     */
    inline ApplicationResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique application ID.
     */
    inline ApplicationResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The display name of the application.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The display name of the application.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The display name of the application.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The display name of the application.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The display name of the application.
     */
    inline ApplicationResponse& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The display name of the application.
     */
    inline ApplicationResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The display name of the application.
     */
    inline ApplicationResponse& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
