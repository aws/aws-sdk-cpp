﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace OpsWorksCM
{
namespace Model
{
  class AWS_OPSWORKSCM_API DisassociateNodeResult
  {
  public:
    DisassociateNodeResult();
    DisassociateNodeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisassociateNodeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetNodeAssociationStatusToken() const{ return m_nodeAssociationStatusToken; }

    
    inline void SetNodeAssociationStatusToken(const Aws::String& value) { m_nodeAssociationStatusToken = value; }

    
    inline void SetNodeAssociationStatusToken(Aws::String&& value) { m_nodeAssociationStatusToken = value; }

    
    inline void SetNodeAssociationStatusToken(const char* value) { m_nodeAssociationStatusToken.assign(value); }

    
    inline DisassociateNodeResult& WithNodeAssociationStatusToken(const Aws::String& value) { SetNodeAssociationStatusToken(value); return *this;}

    
    inline DisassociateNodeResult& WithNodeAssociationStatusToken(Aws::String&& value) { SetNodeAssociationStatusToken(value); return *this;}

    
    inline DisassociateNodeResult& WithNodeAssociationStatusToken(const char* value) { SetNodeAssociationStatusToken(value); return *this;}

  private:
    Aws::String m_nodeAssociationStatusToken;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
