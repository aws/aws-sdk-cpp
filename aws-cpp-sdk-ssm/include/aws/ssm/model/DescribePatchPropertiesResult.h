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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DescribePatchPropertiesResult
  {
  public:
    DescribePatchPropertiesResult();
    DescribePatchPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePatchPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the properties for patches matching the filter request
     * parameters.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetProperties() const{ return m_properties; }

    /**
     * <p>A list of the properties for patches matching the filter request
     * parameters.</p>
     */
    inline void SetProperties(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_properties = value; }

    /**
     * <p>A list of the properties for patches matching the filter request
     * parameters.</p>
     */
    inline void SetProperties(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_properties = std::move(value); }

    /**
     * <p>A list of the properties for patches matching the filter request
     * parameters.</p>
     */
    inline DescribePatchPropertiesResult& WithProperties(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetProperties(value); return *this;}

    /**
     * <p>A list of the properties for patches matching the filter request
     * parameters.</p>
     */
    inline DescribePatchPropertiesResult& WithProperties(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A list of the properties for patches matching the filter request
     * parameters.</p>
     */
    inline DescribePatchPropertiesResult& AddProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_properties.push_back(value); return *this; }

    /**
     * <p>A list of the properties for patches matching the filter request
     * parameters.</p>
     */
    inline DescribePatchPropertiesResult& AddProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_properties.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline DescribePatchPropertiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline DescribePatchPropertiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline DescribePatchPropertiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_properties;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
