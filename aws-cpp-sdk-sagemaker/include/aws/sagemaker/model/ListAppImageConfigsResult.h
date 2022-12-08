/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AppImageConfigDetails.h>
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
namespace SageMaker
{
namespace Model
{
  class ListAppImageConfigsResult
  {
  public:
    AWS_SAGEMAKER_API ListAppImageConfigsResult();
    AWS_SAGEMAKER_API ListAppImageConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAppImageConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token for getting the next set of AppImageConfigs, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of AppImageConfigs, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of AppImageConfigs, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of AppImageConfigs, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of AppImageConfigs, if there are any.</p>
     */
    inline ListAppImageConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of AppImageConfigs, if there are any.</p>
     */
    inline ListAppImageConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of AppImageConfigs, if there are any.</p>
     */
    inline ListAppImageConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of AppImageConfigs and their properties.</p>
     */
    inline const Aws::Vector<AppImageConfigDetails>& GetAppImageConfigs() const{ return m_appImageConfigs; }

    /**
     * <p>A list of AppImageConfigs and their properties.</p>
     */
    inline void SetAppImageConfigs(const Aws::Vector<AppImageConfigDetails>& value) { m_appImageConfigs = value; }

    /**
     * <p>A list of AppImageConfigs and their properties.</p>
     */
    inline void SetAppImageConfigs(Aws::Vector<AppImageConfigDetails>&& value) { m_appImageConfigs = std::move(value); }

    /**
     * <p>A list of AppImageConfigs and their properties.</p>
     */
    inline ListAppImageConfigsResult& WithAppImageConfigs(const Aws::Vector<AppImageConfigDetails>& value) { SetAppImageConfigs(value); return *this;}

    /**
     * <p>A list of AppImageConfigs and their properties.</p>
     */
    inline ListAppImageConfigsResult& WithAppImageConfigs(Aws::Vector<AppImageConfigDetails>&& value) { SetAppImageConfigs(std::move(value)); return *this;}

    /**
     * <p>A list of AppImageConfigs and their properties.</p>
     */
    inline ListAppImageConfigsResult& AddAppImageConfigs(const AppImageConfigDetails& value) { m_appImageConfigs.push_back(value); return *this; }

    /**
     * <p>A list of AppImageConfigs and their properties.</p>
     */
    inline ListAppImageConfigsResult& AddAppImageConfigs(AppImageConfigDetails&& value) { m_appImageConfigs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<AppImageConfigDetails> m_appImageConfigs;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
