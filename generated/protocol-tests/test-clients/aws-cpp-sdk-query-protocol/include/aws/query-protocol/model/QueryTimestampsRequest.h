/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace QueryProtocol
{
namespace Model
{

  /**
   */
  class QueryTimestampsRequest : public QueryProtocolRequest
  {
  public:
    AWS_QUERYPROTOCOL_API QueryTimestampsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryTimestamps"; }

    AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::Utils::DateTime& GetNormalFormat() const{ return m_normalFormat; }
    inline bool NormalFormatHasBeenSet() const { return m_normalFormatHasBeenSet; }
    inline void SetNormalFormat(const Aws::Utils::DateTime& value) { m_normalFormatHasBeenSet = true; m_normalFormat = value; }
    inline void SetNormalFormat(Aws::Utils::DateTime&& value) { m_normalFormatHasBeenSet = true; m_normalFormat = std::move(value); }
    inline QueryTimestampsRequest& WithNormalFormat(const Aws::Utils::DateTime& value) { SetNormalFormat(value); return *this;}
    inline QueryTimestampsRequest& WithNormalFormat(Aws::Utils::DateTime&& value) { SetNormalFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetEpochMember() const{ return m_epochMember; }
    inline bool EpochMemberHasBeenSet() const { return m_epochMemberHasBeenSet; }
    inline void SetEpochMember(const Aws::Utils::DateTime& value) { m_epochMemberHasBeenSet = true; m_epochMember = value; }
    inline void SetEpochMember(Aws::Utils::DateTime&& value) { m_epochMemberHasBeenSet = true; m_epochMember = std::move(value); }
    inline QueryTimestampsRequest& WithEpochMember(const Aws::Utils::DateTime& value) { SetEpochMember(value); return *this;}
    inline QueryTimestampsRequest& WithEpochMember(Aws::Utils::DateTime&& value) { SetEpochMember(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetEpochTarget() const{ return m_epochTarget; }
    inline bool EpochTargetHasBeenSet() const { return m_epochTargetHasBeenSet; }
    inline void SetEpochTarget(const Aws::Utils::DateTime& value) { m_epochTargetHasBeenSet = true; m_epochTarget = value; }
    inline void SetEpochTarget(Aws::Utils::DateTime&& value) { m_epochTargetHasBeenSet = true; m_epochTarget = std::move(value); }
    inline QueryTimestampsRequest& WithEpochTarget(const Aws::Utils::DateTime& value) { SetEpochTarget(value); return *this;}
    inline QueryTimestampsRequest& WithEpochTarget(Aws::Utils::DateTime&& value) { SetEpochTarget(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_normalFormat;
    bool m_normalFormatHasBeenSet = false;

    Aws::Utils::DateTime m_epochMember;
    bool m_epochMemberHasBeenSet = false;

    Aws::Utils::DateTime m_epochTarget;
    bool m_epochTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
