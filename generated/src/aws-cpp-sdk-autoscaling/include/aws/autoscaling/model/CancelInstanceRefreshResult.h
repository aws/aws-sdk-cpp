﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class CancelInstanceRefreshResult
  {
  public:
    AWS_AUTOSCALING_API CancelInstanceRefreshResult();
    AWS_AUTOSCALING_API CancelInstanceRefreshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API CancelInstanceRefreshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The instance refresh ID associated with the request. This is the unique ID
     * assigned to the instance refresh when it was started.</p>
     */
    inline const Aws::String& GetInstanceRefreshId() const{ return m_instanceRefreshId; }
    inline void SetInstanceRefreshId(const Aws::String& value) { m_instanceRefreshId = value; }
    inline void SetInstanceRefreshId(Aws::String&& value) { m_instanceRefreshId = std::move(value); }
    inline void SetInstanceRefreshId(const char* value) { m_instanceRefreshId.assign(value); }
    inline CancelInstanceRefreshResult& WithInstanceRefreshId(const Aws::String& value) { SetInstanceRefreshId(value); return *this;}
    inline CancelInstanceRefreshResult& WithInstanceRefreshId(Aws::String&& value) { SetInstanceRefreshId(std::move(value)); return *this;}
    inline CancelInstanceRefreshResult& WithInstanceRefreshId(const char* value) { SetInstanceRefreshId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CancelInstanceRefreshResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CancelInstanceRefreshResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceRefreshId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
