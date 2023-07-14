﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/EBSOptions.h>
#include <aws/opensearch/model/OptionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Status of the EBS options for the specified domain.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/EBSOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API EBSOptionsStatus
  {
  public:
    EBSOptionsStatus();
    EBSOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    EBSOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The EBS options for the specified domain.</p>
     */
    inline const EBSOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The EBS options for the specified domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The EBS options for the specified domain.</p>
     */
    inline void SetOptions(const EBSOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The EBS options for the specified domain.</p>
     */
    inline void SetOptions(EBSOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The EBS options for the specified domain.</p>
     */
    inline EBSOptionsStatus& WithOptions(const EBSOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The EBS options for the specified domain.</p>
     */
    inline EBSOptionsStatus& WithOptions(EBSOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline EBSOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline EBSOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    EBSOptions m_options;
    bool m_optionsHasBeenSet;

    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
