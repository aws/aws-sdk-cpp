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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/RulesPackage.h>

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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API DescribeRulesPackageResult
  {
  public:
    DescribeRulesPackageResult();
    DescribeRulesPackageResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRulesPackageResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the rules package.</p>
     */
    inline const RulesPackage& GetRulesPackage() const{ return m_rulesPackage; }

    /**
     * <p>Information about the rules package.</p>
     */
    inline void SetRulesPackage(const RulesPackage& value) { m_rulesPackage = value; }

    /**
     * <p>Information about the rules package.</p>
     */
    inline void SetRulesPackage(RulesPackage&& value) { m_rulesPackage = value; }

    /**
     * <p>Information about the rules package.</p>
     */
    inline DescribeRulesPackageResult& WithRulesPackage(const RulesPackage& value) { SetRulesPackage(value); return *this;}

    /**
     * <p>Information about the rules package.</p>
     */
    inline DescribeRulesPackageResult& WithRulesPackage(RulesPackage&& value) { SetRulesPackage(value); return *this;}

  private:
    RulesPackage m_rulesPackage;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
