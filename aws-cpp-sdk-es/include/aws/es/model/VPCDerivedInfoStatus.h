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
#include <aws/es/model/VPCDerivedInfo.h>
#include <aws/es/model/OptionStatus.h>
#include <utility>

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
   * <p> Status of the VPC options for the specified Elasticsearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/VPCDerivedInfoStatus">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API VPCDerivedInfoStatus
  {
  public:
    VPCDerivedInfoStatus();
    VPCDerivedInfoStatus(Aws::Utils::Json::JsonView jsonValue);
    VPCDerivedInfoStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the VPC options for the specified Elasticsearch domain.</p>
     */
    inline const VPCDerivedInfo& GetOptions() const{ return m_options; }

    /**
     * <p> Specifies the VPC options for the specified Elasticsearch domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p> Specifies the VPC options for the specified Elasticsearch domain.</p>
     */
    inline void SetOptions(const VPCDerivedInfo& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p> Specifies the VPC options for the specified Elasticsearch domain.</p>
     */
    inline void SetOptions(VPCDerivedInfo&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p> Specifies the VPC options for the specified Elasticsearch domain.</p>
     */
    inline VPCDerivedInfoStatus& WithOptions(const VPCDerivedInfo& value) { SetOptions(value); return *this;}

    /**
     * <p> Specifies the VPC options for the specified Elasticsearch domain.</p>
     */
    inline VPCDerivedInfoStatus& WithOptions(VPCDerivedInfo&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p> Specifies the status of the VPC options for the specified Elasticsearch
     * domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Specifies the status of the VPC options for the specified Elasticsearch
     * domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Specifies the status of the VPC options for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Specifies the status of the VPC options for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Specifies the status of the VPC options for the specified Elasticsearch
     * domain.</p>
     */
    inline VPCDerivedInfoStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Specifies the status of the VPC options for the specified Elasticsearch
     * domain.</p>
     */
    inline VPCDerivedInfoStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    VPCDerivedInfo m_options;
    bool m_optionsHasBeenSet;

    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
