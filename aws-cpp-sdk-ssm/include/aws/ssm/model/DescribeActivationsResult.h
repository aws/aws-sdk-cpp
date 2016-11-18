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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Activation.h>

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
  class AWS_SSM_API DescribeActivationsResult
  {
  public:
    DescribeActivationsResult();
    DescribeActivationsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeActivationsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of activations for your AWS account.</p>
     */
    inline const Aws::Vector<Activation>& GetActivationList() const{ return m_activationList; }

    /**
     * <p>A list of activations for your AWS account.</p>
     */
    inline void SetActivationList(const Aws::Vector<Activation>& value) { m_activationList = value; }

    /**
     * <p>A list of activations for your AWS account.</p>
     */
    inline void SetActivationList(Aws::Vector<Activation>&& value) { m_activationList = value; }

    /**
     * <p>A list of activations for your AWS account.</p>
     */
    inline DescribeActivationsResult& WithActivationList(const Aws::Vector<Activation>& value) { SetActivationList(value); return *this;}

    /**
     * <p>A list of activations for your AWS account.</p>
     */
    inline DescribeActivationsResult& WithActivationList(Aws::Vector<Activation>&& value) { SetActivationList(value); return *this;}

    /**
     * <p>A list of activations for your AWS account.</p>
     */
    inline DescribeActivationsResult& AddActivationList(const Activation& value) { m_activationList.push_back(value); return *this; }

    /**
     * <p>A list of activations for your AWS account.</p>
     */
    inline DescribeActivationsResult& AddActivationList(Activation&& value) { m_activationList.push_back(value); return *this; }

    /**
     * <p> The token for the next set of items to return. Use this token to get the
     * next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of items to return. Use this token to get the
     * next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token for the next set of items to return. Use this token to get the
     * next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p> The token for the next set of items to return. Use this token to get the
     * next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of items to return. Use this token to get the
     * next set of results. </p>
     */
    inline DescribeActivationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of items to return. Use this token to get the
     * next set of results. </p>
     */
    inline DescribeActivationsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of items to return. Use this token to get the
     * next set of results. </p>
     */
    inline DescribeActivationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Activation> m_activationList;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
