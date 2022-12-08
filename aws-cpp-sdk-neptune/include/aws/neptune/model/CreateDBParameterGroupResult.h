/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DBParameterGroup.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
namespace Neptune
{
namespace Model
{
  class CreateDBParameterGroupResult
  {
  public:
    AWS_NEPTUNE_API CreateDBParameterGroupResult();
    AWS_NEPTUNE_API CreateDBParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API CreateDBParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBParameterGroup& GetDBParameterGroup() const{ return m_dBParameterGroup; }

    
    inline void SetDBParameterGroup(const DBParameterGroup& value) { m_dBParameterGroup = value; }

    
    inline void SetDBParameterGroup(DBParameterGroup&& value) { m_dBParameterGroup = std::move(value); }

    
    inline CreateDBParameterGroupResult& WithDBParameterGroup(const DBParameterGroup& value) { SetDBParameterGroup(value); return *this;}

    
    inline CreateDBParameterGroupResult& WithDBParameterGroup(DBParameterGroup&& value) { SetDBParameterGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateDBParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDBParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBParameterGroup m_dBParameterGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
