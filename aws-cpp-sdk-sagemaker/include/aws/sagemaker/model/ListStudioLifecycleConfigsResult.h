/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/StudioLifecycleConfigDetails.h>
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
  class ListStudioLifecycleConfigsResult
  {
  public:
    AWS_SAGEMAKER_API ListStudioLifecycleConfigsResult();
    AWS_SAGEMAKER_API ListStudioLifecycleConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListStudioLifecycleConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline ListStudioLifecycleConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline ListStudioLifecycleConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline ListStudioLifecycleConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of Lifecycle Configurations and their properties.</p>
     */
    inline const Aws::Vector<StudioLifecycleConfigDetails>& GetStudioLifecycleConfigs() const{ return m_studioLifecycleConfigs; }

    /**
     * <p>A list of Lifecycle Configurations and their properties.</p>
     */
    inline void SetStudioLifecycleConfigs(const Aws::Vector<StudioLifecycleConfigDetails>& value) { m_studioLifecycleConfigs = value; }

    /**
     * <p>A list of Lifecycle Configurations and their properties.</p>
     */
    inline void SetStudioLifecycleConfigs(Aws::Vector<StudioLifecycleConfigDetails>&& value) { m_studioLifecycleConfigs = std::move(value); }

    /**
     * <p>A list of Lifecycle Configurations and their properties.</p>
     */
    inline ListStudioLifecycleConfigsResult& WithStudioLifecycleConfigs(const Aws::Vector<StudioLifecycleConfigDetails>& value) { SetStudioLifecycleConfigs(value); return *this;}

    /**
     * <p>A list of Lifecycle Configurations and their properties.</p>
     */
    inline ListStudioLifecycleConfigsResult& WithStudioLifecycleConfigs(Aws::Vector<StudioLifecycleConfigDetails>&& value) { SetStudioLifecycleConfigs(std::move(value)); return *this;}

    /**
     * <p>A list of Lifecycle Configurations and their properties.</p>
     */
    inline ListStudioLifecycleConfigsResult& AddStudioLifecycleConfigs(const StudioLifecycleConfigDetails& value) { m_studioLifecycleConfigs.push_back(value); return *this; }

    /**
     * <p>A list of Lifecycle Configurations and their properties.</p>
     */
    inline ListStudioLifecycleConfigsResult& AddStudioLifecycleConfigs(StudioLifecycleConfigDetails&& value) { m_studioLifecycleConfigs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<StudioLifecycleConfigDetails> m_studioLifecycleConfigs;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
