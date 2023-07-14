﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API ListRulesPackagesResult
  {
  public:
    ListRulesPackagesResult();
    ListRulesPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRulesPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ARNs that specifies the rules packages returned by the
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }

    /**
     * <p>The list of ARNs that specifies the rules packages returned by the
     * action.</p>
     */
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArns = value; }

    /**
     * <p>The list of ARNs that specifies the rules packages returned by the
     * action.</p>
     */
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArns = std::move(value); }

    /**
     * <p>The list of ARNs that specifies the rules packages returned by the
     * action.</p>
     */
    inline ListRulesPackagesResult& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}

    /**
     * <p>The list of ARNs that specifies the rules packages returned by the
     * action.</p>
     */
    inline ListRulesPackagesResult& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}

    /**
     * <p>The list of ARNs that specifies the rules packages returned by the
     * action.</p>
     */
    inline ListRulesPackagesResult& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>The list of ARNs that specifies the rules packages returned by the
     * action.</p>
     */
    inline ListRulesPackagesResult& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of ARNs that specifies the rules packages returned by the
     * action.</p>
     */
    inline ListRulesPackagesResult& AddRulesPackageArns(const char* value) { m_rulesPackageArns.push_back(value); return *this; }


    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline ListRulesPackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline ListRulesPackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline ListRulesPackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_rulesPackageArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
