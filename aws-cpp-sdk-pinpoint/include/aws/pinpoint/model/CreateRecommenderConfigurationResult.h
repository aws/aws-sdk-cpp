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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/RecommenderConfigurationResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class AWS_PINPOINT_API CreateRecommenderConfigurationResult
  {
  public:
    CreateRecommenderConfigurationResult();
    CreateRecommenderConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRecommenderConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const RecommenderConfigurationResponse& GetRecommenderConfigurationResponse() const{ return m_recommenderConfigurationResponse; }

    
    inline void SetRecommenderConfigurationResponse(const RecommenderConfigurationResponse& value) { m_recommenderConfigurationResponse = value; }

    
    inline void SetRecommenderConfigurationResponse(RecommenderConfigurationResponse&& value) { m_recommenderConfigurationResponse = std::move(value); }

    
    inline CreateRecommenderConfigurationResult& WithRecommenderConfigurationResponse(const RecommenderConfigurationResponse& value) { SetRecommenderConfigurationResponse(value); return *this;}

    
    inline CreateRecommenderConfigurationResult& WithRecommenderConfigurationResponse(RecommenderConfigurationResponse&& value) { SetRecommenderConfigurationResponse(std::move(value)); return *this;}

  private:

    RecommenderConfigurationResponse m_recommenderConfigurationResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
