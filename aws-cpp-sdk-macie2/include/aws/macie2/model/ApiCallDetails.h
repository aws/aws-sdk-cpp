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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/ApiCallDetails">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API ApiCallDetails
  {
  public:
    ApiCallDetails();
    ApiCallDetails(Aws::Utils::Json::JsonView jsonValue);
    ApiCallDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetApi() const{ return m_api; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetApi(const Aws::String& value) { m_apiHasBeenSet = true; m_api = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetApi(Aws::String&& value) { m_apiHasBeenSet = true; m_api = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetApi(const char* value) { m_apiHasBeenSet = true; m_api.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithApi(const Aws::String& value) { SetApi(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithApi(Aws::String&& value) { SetApi(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithApi(const char* value) { SetApi(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetApiServiceName() const{ return m_apiServiceName; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ApiServiceNameHasBeenSet() const { return m_apiServiceNameHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetApiServiceName(const Aws::String& value) { m_apiServiceNameHasBeenSet = true; m_apiServiceName = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetApiServiceName(Aws::String&& value) { m_apiServiceNameHasBeenSet = true; m_apiServiceName = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetApiServiceName(const char* value) { m_apiServiceNameHasBeenSet = true; m_apiServiceName.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithApiServiceName(const Aws::String& value) { SetApiServiceName(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithApiServiceName(Aws::String&& value) { SetApiServiceName(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithApiServiceName(const char* value) { SetApiServiceName(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSeen() const{ return m_firstSeen; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetFirstSeen(const Aws::Utils::DateTime& value) { m_firstSeenHasBeenSet = true; m_firstSeen = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetFirstSeen(Aws::Utils::DateTime&& value) { m_firstSeenHasBeenSet = true; m_firstSeen = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithFirstSeen(const Aws::Utils::DateTime& value) { SetFirstSeen(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithFirstSeen(Aws::Utils::DateTime&& value) { SetFirstSeen(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeen() const{ return m_lastSeen; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetLastSeen(const Aws::Utils::DateTime& value) { m_lastSeenHasBeenSet = true; m_lastSeen = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetLastSeen(Aws::Utils::DateTime&& value) { m_lastSeenHasBeenSet = true; m_lastSeen = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithLastSeen(const Aws::Utils::DateTime& value) { SetLastSeen(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ApiCallDetails& WithLastSeen(Aws::Utils::DateTime&& value) { SetLastSeen(std::move(value)); return *this;}

  private:

    Aws::String m_api;
    bool m_apiHasBeenSet;

    Aws::String m_apiServiceName;
    bool m_apiServiceNameHasBeenSet;

    Aws::Utils::DateTime m_firstSeen;
    bool m_firstSeenHasBeenSet;

    Aws::Utils::DateTime m_lastSeen;
    bool m_lastSeenHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
