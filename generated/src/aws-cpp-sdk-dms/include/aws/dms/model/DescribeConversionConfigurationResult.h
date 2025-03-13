/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeConversionConfigurationResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeConversionConfigurationResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeConversionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeConversionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) for the schema conversion project.</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const { return m_migrationProjectIdentifier; }
    template<typename MigrationProjectIdentifierT = Aws::String>
    void SetMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::forward<MigrationProjectIdentifierT>(value); }
    template<typename MigrationProjectIdentifierT = Aws::String>
    DescribeConversionConfigurationResult& WithMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { SetMigrationProjectIdentifier(std::forward<MigrationProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for the schema conversion project.</p>
     */
    inline const Aws::String& GetConversionConfiguration() const { return m_conversionConfiguration; }
    template<typename ConversionConfigurationT = Aws::String>
    void SetConversionConfiguration(ConversionConfigurationT&& value) { m_conversionConfigurationHasBeenSet = true; m_conversionConfiguration = std::forward<ConversionConfigurationT>(value); }
    template<typename ConversionConfigurationT = Aws::String>
    DescribeConversionConfigurationResult& WithConversionConfiguration(ConversionConfigurationT&& value) { SetConversionConfiguration(std::forward<ConversionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConversionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_conversionConfiguration;
    bool m_conversionConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
