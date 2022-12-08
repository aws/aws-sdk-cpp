/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ProtocolsListData.h>
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
namespace FMS
{
namespace Model
{
  class GetProtocolsListResult
  {
  public:
    AWS_FMS_API GetProtocolsListResult();
    AWS_FMS_API GetProtocolsListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetProtocolsListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified Firewall Manager protocols list.</p>
     */
    inline const ProtocolsListData& GetProtocolsList() const{ return m_protocolsList; }

    /**
     * <p>Information about the specified Firewall Manager protocols list.</p>
     */
    inline void SetProtocolsList(const ProtocolsListData& value) { m_protocolsList = value; }

    /**
     * <p>Information about the specified Firewall Manager protocols list.</p>
     */
    inline void SetProtocolsList(ProtocolsListData&& value) { m_protocolsList = std::move(value); }

    /**
     * <p>Information about the specified Firewall Manager protocols list.</p>
     */
    inline GetProtocolsListResult& WithProtocolsList(const ProtocolsListData& value) { SetProtocolsList(value); return *this;}

    /**
     * <p>Information about the specified Firewall Manager protocols list.</p>
     */
    inline GetProtocolsListResult& WithProtocolsList(ProtocolsListData&& value) { SetProtocolsList(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the specified protocols list.</p>
     */
    inline const Aws::String& GetProtocolsListArn() const{ return m_protocolsListArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified protocols list.</p>
     */
    inline void SetProtocolsListArn(const Aws::String& value) { m_protocolsListArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified protocols list.</p>
     */
    inline void SetProtocolsListArn(Aws::String&& value) { m_protocolsListArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified protocols list.</p>
     */
    inline void SetProtocolsListArn(const char* value) { m_protocolsListArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified protocols list.</p>
     */
    inline GetProtocolsListResult& WithProtocolsListArn(const Aws::String& value) { SetProtocolsListArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified protocols list.</p>
     */
    inline GetProtocolsListResult& WithProtocolsListArn(Aws::String&& value) { SetProtocolsListArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified protocols list.</p>
     */
    inline GetProtocolsListResult& WithProtocolsListArn(const char* value) { SetProtocolsListArn(value); return *this;}

  private:

    ProtocolsListData m_protocolsList;

    Aws::String m_protocolsListArn;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
