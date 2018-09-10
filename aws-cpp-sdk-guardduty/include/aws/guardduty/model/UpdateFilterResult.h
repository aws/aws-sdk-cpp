﻿/*
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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API UpdateFilterResult
  {
  public:
    UpdateFilterResult();
    UpdateFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The name of the filter.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the filter.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * The name of the filter.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * The name of the filter.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * The name of the filter.
     */
    inline UpdateFilterResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the filter.
     */
    inline UpdateFilterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the filter.
     */
    inline UpdateFilterResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
