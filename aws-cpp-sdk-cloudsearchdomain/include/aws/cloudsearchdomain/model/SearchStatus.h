﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>Contains the resource id (<code>rid</code>) and the time it took to process
   * the request (<code>timems</code>).</p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API SearchStatus
  {
  public:
    SearchStatus();
    SearchStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    SearchStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>How long it took to process the request, in milliseconds.</p>
     */
    inline long long GetTimems() const{ return m_timems; }

    /**
     * <p>How long it took to process the request, in milliseconds.</p>
     */
    inline void SetTimems(long long value) { m_timemsHasBeenSet = true; m_timems = value; }

    /**
     * <p>How long it took to process the request, in milliseconds.</p>
     */
    inline SearchStatus& WithTimems(long long value) { SetTimems(value); return *this;}

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline const Aws::String& GetRid() const{ return m_rid; }

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline void SetRid(const Aws::String& value) { m_ridHasBeenSet = true; m_rid = value; }

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline void SetRid(Aws::String&& value) { m_ridHasBeenSet = true; m_rid = value; }

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline void SetRid(const char* value) { m_ridHasBeenSet = true; m_rid.assign(value); }

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline SearchStatus& WithRid(const Aws::String& value) { SetRid(value); return *this;}

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline SearchStatus& WithRid(Aws::String&& value) { SetRid(value); return *this;}

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline SearchStatus& WithRid(const char* value) { SetRid(value); return *this;}

  private:
    long long m_timems;
    bool m_timemsHasBeenSet;
    Aws::String m_rid;
    bool m_ridHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
