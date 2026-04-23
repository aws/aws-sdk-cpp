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
#include <aws/es/ElasticsearchService_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> InstanceCountLimits represents the limits on number of instances that be
   * created in Amazon Elasticsearch for given InstanceType. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/InstanceCountLimits">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API InstanceCountLimits
  {
  public:
    InstanceCountLimits();
    InstanceCountLimits(Aws::Utils::Json::JsonView jsonValue);
    InstanceCountLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetMinimumInstanceCount() const{ return m_minimumInstanceCount; }

    
    inline bool MinimumInstanceCountHasBeenSet() const { return m_minimumInstanceCountHasBeenSet; }

    
    inline void SetMinimumInstanceCount(int value) { m_minimumInstanceCountHasBeenSet = true; m_minimumInstanceCount = value; }

    
    inline InstanceCountLimits& WithMinimumInstanceCount(int value) { SetMinimumInstanceCount(value); return *this;}


    
    inline int GetMaximumInstanceCount() const{ return m_maximumInstanceCount; }

    
    inline bool MaximumInstanceCountHasBeenSet() const { return m_maximumInstanceCountHasBeenSet; }

    
    inline void SetMaximumInstanceCount(int value) { m_maximumInstanceCountHasBeenSet = true; m_maximumInstanceCount = value; }

    
    inline InstanceCountLimits& WithMaximumInstanceCount(int value) { SetMaximumInstanceCount(value); return *this;}

  private:

    int m_minimumInstanceCount;
    bool m_minimumInstanceCountHasBeenSet;

    int m_maximumInstanceCount;
    bool m_maximumInstanceCountHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
