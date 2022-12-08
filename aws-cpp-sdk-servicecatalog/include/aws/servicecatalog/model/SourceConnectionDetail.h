/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/SourceType.h>
#include <aws/servicecatalog/model/SourceConnectionParameters.h>
#include <aws/servicecatalog/model/LastSync.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Provides details about the configured <code>SourceConnection</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SourceConnectionDetail">AWS
   * API Reference</a></p>
   */
  class SourceConnectionDetail
  {
  public:
    AWS_SERVICECATALOG_API SourceConnectionDetail();
    AWS_SERVICECATALOG_API SourceConnectionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API SourceConnectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar.</p>
     */
    inline const SourceType& GetType() const{ return m_type; }

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar.</p>
     */
    inline void SetType(const SourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar.</p>
     */
    inline void SetType(SourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar.</p>
     */
    inline SourceConnectionDetail& WithType(const SourceType& value) { SetType(value); return *this;}

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar.</p>
     */
    inline SourceConnectionDetail& WithType(SourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The connection details based on the connection <code>Type</code>.</p>
     */
    inline const SourceConnectionParameters& GetConnectionParameters() const{ return m_connectionParameters; }

    /**
     * <p>The connection details based on the connection <code>Type</code>.</p>
     */
    inline bool ConnectionParametersHasBeenSet() const { return m_connectionParametersHasBeenSet; }

    /**
     * <p>The connection details based on the connection <code>Type</code>.</p>
     */
    inline void SetConnectionParameters(const SourceConnectionParameters& value) { m_connectionParametersHasBeenSet = true; m_connectionParameters = value; }

    /**
     * <p>The connection details based on the connection <code>Type</code>.</p>
     */
    inline void SetConnectionParameters(SourceConnectionParameters&& value) { m_connectionParametersHasBeenSet = true; m_connectionParameters = std::move(value); }

    /**
     * <p>The connection details based on the connection <code>Type</code>.</p>
     */
    inline SourceConnectionDetail& WithConnectionParameters(const SourceConnectionParameters& value) { SetConnectionParameters(value); return *this;}

    /**
     * <p>The connection details based on the connection <code>Type</code>.</p>
     */
    inline SourceConnectionDetail& WithConnectionParameters(SourceConnectionParameters&& value) { SetConnectionParameters(std::move(value)); return *this;}


    /**
     * <p>Provides details about the product's connection sync and contains the
     * following sub-fields. </p> <ul> <li> <p> <code>LastSyncTime</code> </p> </li>
     * <li> <p> <code>LastSyncStatus</code> </p> </li> <li> <p>
     * <code>LastSyncStatusMessage</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncTime</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncProvisioningArtifactID</code> </p> </li> </ul>
     */
    inline const LastSync& GetLastSync() const{ return m_lastSync; }

    /**
     * <p>Provides details about the product's connection sync and contains the
     * following sub-fields. </p> <ul> <li> <p> <code>LastSyncTime</code> </p> </li>
     * <li> <p> <code>LastSyncStatus</code> </p> </li> <li> <p>
     * <code>LastSyncStatusMessage</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncTime</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncProvisioningArtifactID</code> </p> </li> </ul>
     */
    inline bool LastSyncHasBeenSet() const { return m_lastSyncHasBeenSet; }

    /**
     * <p>Provides details about the product's connection sync and contains the
     * following sub-fields. </p> <ul> <li> <p> <code>LastSyncTime</code> </p> </li>
     * <li> <p> <code>LastSyncStatus</code> </p> </li> <li> <p>
     * <code>LastSyncStatusMessage</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncTime</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncProvisioningArtifactID</code> </p> </li> </ul>
     */
    inline void SetLastSync(const LastSync& value) { m_lastSyncHasBeenSet = true; m_lastSync = value; }

    /**
     * <p>Provides details about the product's connection sync and contains the
     * following sub-fields. </p> <ul> <li> <p> <code>LastSyncTime</code> </p> </li>
     * <li> <p> <code>LastSyncStatus</code> </p> </li> <li> <p>
     * <code>LastSyncStatusMessage</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncTime</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncProvisioningArtifactID</code> </p> </li> </ul>
     */
    inline void SetLastSync(LastSync&& value) { m_lastSyncHasBeenSet = true; m_lastSync = std::move(value); }

    /**
     * <p>Provides details about the product's connection sync and contains the
     * following sub-fields. </p> <ul> <li> <p> <code>LastSyncTime</code> </p> </li>
     * <li> <p> <code>LastSyncStatus</code> </p> </li> <li> <p>
     * <code>LastSyncStatusMessage</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncTime</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncProvisioningArtifactID</code> </p> </li> </ul>
     */
    inline SourceConnectionDetail& WithLastSync(const LastSync& value) { SetLastSync(value); return *this;}

    /**
     * <p>Provides details about the product's connection sync and contains the
     * following sub-fields. </p> <ul> <li> <p> <code>LastSyncTime</code> </p> </li>
     * <li> <p> <code>LastSyncStatus</code> </p> </li> <li> <p>
     * <code>LastSyncStatusMessage</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncTime</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncProvisioningArtifactID</code> </p> </li> </ul>
     */
    inline SourceConnectionDetail& WithLastSync(LastSync&& value) { SetLastSync(std::move(value)); return *this;}

  private:

    SourceType m_type;
    bool m_typeHasBeenSet = false;

    SourceConnectionParameters m_connectionParameters;
    bool m_connectionParametersHasBeenSet = false;

    LastSync m_lastSync;
    bool m_lastSyncHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
