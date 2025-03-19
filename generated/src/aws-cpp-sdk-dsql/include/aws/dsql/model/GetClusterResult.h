/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/model/ClusterStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Output Mixin</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/GetClusterOutput">AWS
   * API Reference</a></p>
   */
  class GetClusterResult
  {
  public:
    AWS_DSQL_API GetClusterResult() = default;
    AWS_DSQL_API GetClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DSQL_API GetClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the retrieved cluster.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GetClusterResult& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the retrieved cluster.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetClusterResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retrieved cluster.</p>
     */
    inline ClusterStatus GetStatus() const { return m_status; }
    inline void SetStatus(ClusterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetClusterResult& WithStatus(ClusterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetClusterResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether deletion protection is enabled in this cluster.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline GetClusterResult& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The witness Region of the cluster. Applicable only for multi-Region
     * clusters.</p>
     */
    inline const Aws::String& GetWitnessRegion() const { return m_witnessRegion; }
    template<typename WitnessRegionT = Aws::String>
    void SetWitnessRegion(WitnessRegionT&& value) { m_witnessRegionHasBeenSet = true; m_witnessRegion = std::forward<WitnessRegionT>(value); }
    template<typename WitnessRegionT = Aws::String>
    GetClusterResult& WithWitnessRegion(WitnessRegionT&& value) { SetWitnessRegion(std::forward<WitnessRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the clusters linked to the retrieved cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedClusterArns() const { return m_linkedClusterArns; }
    template<typename LinkedClusterArnsT = Aws::Vector<Aws::String>>
    void SetLinkedClusterArns(LinkedClusterArnsT&& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns = std::forward<LinkedClusterArnsT>(value); }
    template<typename LinkedClusterArnsT = Aws::Vector<Aws::String>>
    GetClusterResult& WithLinkedClusterArns(LinkedClusterArnsT&& value) { SetLinkedClusterArns(std::forward<LinkedClusterArnsT>(value)); return *this;}
    template<typename LinkedClusterArnsT = Aws::String>
    GetClusterResult& AddLinkedClusterArns(LinkedClusterArnsT&& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns.emplace_back(std::forward<LinkedClusterArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::String m_witnessRegion;
    bool m_witnessRegionHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkedClusterArns;
    bool m_linkedClusterArnsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
