/*
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the ListThingPrincipals operation.</p>
   */
  class AWS_IOT_API ListThingPrincipalsResult
  {
  public:
    ListThingPrincipalsResult();
    ListThingPrincipalsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListThingPrincipalsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The principals associated with the thing.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The principals associated with the thing.</p>
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principals = value; }

    /**
     * <p>The principals associated with the thing.</p>
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principals = value; }

    /**
     * <p>The principals associated with the thing.</p>
     */
    inline ListThingPrincipalsResult& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The principals associated with the thing.</p>
     */
    inline ListThingPrincipalsResult& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The principals associated with the thing.</p>
     */
    inline ListThingPrincipalsResult& AddPrincipals(const Aws::String& value) { m_principals.push_back(value); return *this; }

    /**
     * <p>The principals associated with the thing.</p>
     */
    inline ListThingPrincipalsResult& AddPrincipals(Aws::String&& value) { m_principals.push_back(value); return *this; }

    /**
     * <p>The principals associated with the thing.</p>
     */
    inline ListThingPrincipalsResult& AddPrincipals(const char* value) { m_principals.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_principals;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
