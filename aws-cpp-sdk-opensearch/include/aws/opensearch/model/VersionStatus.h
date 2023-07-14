﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The status of the OpenSearch version options for the specified OpenSearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/VersionStatus">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API VersionStatus
  {
  public:
    VersionStatus();
    VersionStatus(Aws::Utils::Json::JsonView jsonValue);
    VersionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The OpenSearch version for the specified OpenSearch domain.</p>
     */
    inline const Aws::String& GetOptions() const{ return m_options; }

    /**
     * <p>The OpenSearch version for the specified OpenSearch domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The OpenSearch version for the specified OpenSearch domain.</p>
     */
    inline void SetOptions(const Aws::String& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The OpenSearch version for the specified OpenSearch domain.</p>
     */
    inline void SetOptions(Aws::String&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The OpenSearch version for the specified OpenSearch domain.</p>
     */
    inline void SetOptions(const char* value) { m_optionsHasBeenSet = true; m_options.assign(value); }

    /**
     * <p>The OpenSearch version for the specified OpenSearch domain.</p>
     */
    inline VersionStatus& WithOptions(const Aws::String& value) { SetOptions(value); return *this;}

    /**
     * <p>The OpenSearch version for the specified OpenSearch domain.</p>
     */
    inline VersionStatus& WithOptions(Aws::String&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The OpenSearch version for the specified OpenSearch domain.</p>
     */
    inline VersionStatus& WithOptions(const char* value) { SetOptions(value); return *this;}


    /**
     * <p>The status of the OpenSearch version options for the specified OpenSearch
     * domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the OpenSearch version options for the specified OpenSearch
     * domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the OpenSearch version options for the specified OpenSearch
     * domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the OpenSearch version options for the specified OpenSearch
     * domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the OpenSearch version options for the specified OpenSearch
     * domain.</p>
     */
    inline VersionStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the OpenSearch version options for the specified OpenSearch
     * domain.</p>
     */
    inline VersionStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_options;
    bool m_optionsHasBeenSet;

    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
