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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/AliasConfiguration.h>

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
namespace Lambda
{
namespace Model
{
  class AWS_LAMBDA_API ListAliasesResult
  {
  public:
    ListAliasesResult();
    ListAliasesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAliasesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A string, present if there are more aliases.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>A string, present if there are more aliases.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>A string, present if there are more aliases.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>A string, present if there are more aliases.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>A string, present if there are more aliases.</p>
     */
    inline ListAliasesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>A string, present if there are more aliases.</p>
     */
    inline ListAliasesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>A string, present if there are more aliases.</p>
     */
    inline ListAliasesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    /**
     * <p>A list of aliases.</p>
     */
    inline const Aws::Vector<AliasConfiguration>& GetAliases() const{ return m_aliases; }

    /**
     * <p>A list of aliases.</p>
     */
    inline void SetAliases(const Aws::Vector<AliasConfiguration>& value) { m_aliases = value; }

    /**
     * <p>A list of aliases.</p>
     */
    inline void SetAliases(Aws::Vector<AliasConfiguration>&& value) { m_aliases = value; }

    /**
     * <p>A list of aliases.</p>
     */
    inline ListAliasesResult& WithAliases(const Aws::Vector<AliasConfiguration>& value) { SetAliases(value); return *this;}

    /**
     * <p>A list of aliases.</p>
     */
    inline ListAliasesResult& WithAliases(Aws::Vector<AliasConfiguration>&& value) { SetAliases(value); return *this;}

    /**
     * <p>A list of aliases.</p>
     */
    inline ListAliasesResult& AddAliases(const AliasConfiguration& value) { m_aliases.push_back(value); return *this; }

    /**
     * <p>A list of aliases.</p>
     */
    inline ListAliasesResult& AddAliases(AliasConfiguration&& value) { m_aliases.push_back(value); return *this; }

  private:
    Aws::String m_nextMarker;
    Aws::Vector<AliasConfiguration> m_aliases;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
