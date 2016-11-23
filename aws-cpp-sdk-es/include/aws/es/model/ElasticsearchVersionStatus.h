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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/OptionStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Status of the Elasticsearch version options for the specified Elasticsearch
   * domain.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ElasticsearchVersionStatus
  {
  public:
    ElasticsearchVersionStatus();
    ElasticsearchVersionStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    ElasticsearchVersionStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p> Specifies the Elasticsearch version for the specified Elasticsearch
     * domain.</p>
     */
    inline const Aws::String& GetOptions() const{ return m_options; }

    /**
     * <p> Specifies the Elasticsearch version for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(const Aws::String& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p> Specifies the Elasticsearch version for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(Aws::String&& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p> Specifies the Elasticsearch version for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(const char* value) { m_optionsHasBeenSet = true; m_options.assign(value); }

    /**
     * <p> Specifies the Elasticsearch version for the specified Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchVersionStatus& WithOptions(const Aws::String& value) { SetOptions(value); return *this;}

    /**
     * <p> Specifies the Elasticsearch version for the specified Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchVersionStatus& WithOptions(Aws::String&& value) { SetOptions(value); return *this;}

    /**
     * <p> Specifies the Elasticsearch version for the specified Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchVersionStatus& WithOptions(const char* value) { SetOptions(value); return *this;}

    /**
     * <p> Specifies the status of the Elasticsearch version options for the specified
     * Elasticsearch domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Specifies the status of the Elasticsearch version options for the specified
     * Elasticsearch domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Specifies the status of the Elasticsearch version options for the specified
     * Elasticsearch domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Specifies the status of the Elasticsearch version options for the specified
     * Elasticsearch domain.</p>
     */
    inline ElasticsearchVersionStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Specifies the status of the Elasticsearch version options for the specified
     * Elasticsearch domain.</p>
     */
    inline ElasticsearchVersionStatus& WithStatus(OptionStatus&& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_options;
    bool m_optionsHasBeenSet;
    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
