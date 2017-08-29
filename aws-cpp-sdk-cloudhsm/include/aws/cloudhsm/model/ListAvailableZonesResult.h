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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudHSM
{
namespace Model
{
  class AWS_CLOUDHSM_API ListAvailableZonesResult
  {
  public:
    ListAvailableZonesResult();
    ListAvailableZonesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAvailableZonesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAZList() const{ return m_aZList; }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline void SetAZList(const Aws::Vector<Aws::String>& value) { m_aZList = value; }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline void SetAZList(Aws::Vector<Aws::String>&& value) { m_aZList = std::move(value); }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& WithAZList(const Aws::Vector<Aws::String>& value) { SetAZList(value); return *this;}

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& WithAZList(Aws::Vector<Aws::String>&& value) { SetAZList(std::move(value)); return *this;}

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& AddAZList(const Aws::String& value) { m_aZList.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& AddAZList(Aws::String&& value) { m_aZList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& AddAZList(const char* value) { m_aZList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_aZList;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
