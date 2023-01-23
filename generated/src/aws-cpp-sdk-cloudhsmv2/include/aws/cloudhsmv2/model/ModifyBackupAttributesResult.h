/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/Backup.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class ModifyBackupAttributesResult
  {
  public:
    AWS_CLOUDHSMV2_API ModifyBackupAttributesResult();
    AWS_CLOUDHSMV2_API ModifyBackupAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API ModifyBackupAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Backup& GetBackup() const{ return m_backup; }

    
    inline void SetBackup(const Backup& value) { m_backup = value; }

    
    inline void SetBackup(Backup&& value) { m_backup = std::move(value); }

    
    inline ModifyBackupAttributesResult& WithBackup(const Backup& value) { SetBackup(value); return *this;}

    
    inline ModifyBackupAttributesResult& WithBackup(Backup&& value) { SetBackup(std::move(value)); return *this;}

  private:

    Backup m_backup;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
