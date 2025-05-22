/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/model/ClusterStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dsql/model/MultiRegionProperties.h>
#include <aws/dsql/model/EncryptionDetails.h>
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
namespace DSQL
{
namespace Model
{
  /**
   * <p>The output of a created cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/CreateClusterOutput">AWS
   * API Reference</a></p>
   */
  class CreateClusterResult
  {
  public:
    AWS_DSQL_API CreateClusterResult() = default;
    AWS_DSQL_API CreateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DSQL_API CreateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the created cluster.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    CreateClusterResult& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the created cluster.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateClusterResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the created cluster.</p>
     */
    inline ClusterStatus GetStatus() const { return m_status; }
    inline void SetStatus(ClusterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateClusterResult& WithStatus(ClusterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of when created the cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateClusterResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The multi-Region cluster configuration details that were set during cluster
     * creation</p>
     */
    inline const MultiRegionProperties& GetMultiRegionProperties() const { return m_multiRegionProperties; }
    template<typename MultiRegionPropertiesT = MultiRegionProperties>
    void SetMultiRegionProperties(MultiRegionPropertiesT&& value) { m_multiRegionPropertiesHasBeenSet = true; m_multiRegionProperties = std::forward<MultiRegionPropertiesT>(value); }
    template<typename MultiRegionPropertiesT = MultiRegionProperties>
    CreateClusterResult& WithMultiRegionProperties(MultiRegionPropertiesT&& value) { SetMultiRegionProperties(std::forward<MultiRegionPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for the cluster that was specified during the
     * creation process, including the KMS key identifier and encryption state.</p>
     */
    inline const EncryptionDetails& GetEncryptionDetails() const { return m_encryptionDetails; }
    template<typename EncryptionDetailsT = EncryptionDetails>
    void SetEncryptionDetails(EncryptionDetailsT&& value) { m_encryptionDetailsHasBeenSet = true; m_encryptionDetails = std::forward<EncryptionDetailsT>(value); }
    template<typename EncryptionDetailsT = EncryptionDetails>
    CreateClusterResult& WithEncryptionDetails(EncryptionDetailsT&& value) { SetEncryptionDetails(std::forward<EncryptionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether deletion protection is enabled on this cluster.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline CreateClusterResult& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ClusterStatus m_status{ClusterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    MultiRegionProperties m_multiRegionProperties;
    bool m_multiRegionPropertiesHasBeenSet = false;

    EncryptionDetails m_encryptionDetails;
    bool m_encryptionDetailsHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
