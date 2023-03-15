﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Script.h>
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
namespace GameLift
{
namespace Model
{
  class UpdateScriptResult
  {
  public:
    AWS_GAMELIFT_API UpdateScriptResult();
    AWS_GAMELIFT_API UpdateScriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API UpdateScriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created script record with a unique script ID. The new script's
     * storage location reflects an Amazon S3 location: (1) If the script was uploaded
     * from an S3 bucket under your account, the storage location reflects the
     * information that was provided in the <i>CreateScript</i> request; (2) If the
     * script file was uploaded from a local zip file, the storage location reflects an
     * S3 location controls by the Amazon GameLift service.</p>
     */
    inline const Script& GetScript() const{ return m_script; }

    /**
     * <p>The newly created script record with a unique script ID. The new script's
     * storage location reflects an Amazon S3 location: (1) If the script was uploaded
     * from an S3 bucket under your account, the storage location reflects the
     * information that was provided in the <i>CreateScript</i> request; (2) If the
     * script file was uploaded from a local zip file, the storage location reflects an
     * S3 location controls by the Amazon GameLift service.</p>
     */
    inline void SetScript(const Script& value) { m_script = value; }

    /**
     * <p>The newly created script record with a unique script ID. The new script's
     * storage location reflects an Amazon S3 location: (1) If the script was uploaded
     * from an S3 bucket under your account, the storage location reflects the
     * information that was provided in the <i>CreateScript</i> request; (2) If the
     * script file was uploaded from a local zip file, the storage location reflects an
     * S3 location controls by the Amazon GameLift service.</p>
     */
    inline void SetScript(Script&& value) { m_script = std::move(value); }

    /**
     * <p>The newly created script record with a unique script ID. The new script's
     * storage location reflects an Amazon S3 location: (1) If the script was uploaded
     * from an S3 bucket under your account, the storage location reflects the
     * information that was provided in the <i>CreateScript</i> request; (2) If the
     * script file was uploaded from a local zip file, the storage location reflects an
     * S3 location controls by the Amazon GameLift service.</p>
     */
    inline UpdateScriptResult& WithScript(const Script& value) { SetScript(value); return *this;}

    /**
     * <p>The newly created script record with a unique script ID. The new script's
     * storage location reflects an Amazon S3 location: (1) If the script was uploaded
     * from an S3 bucket under your account, the storage location reflects the
     * information that was provided in the <i>CreateScript</i> request; (2) If the
     * script file was uploaded from a local zip file, the storage location reflects an
     * S3 location controls by the Amazon GameLift service.</p>
     */
    inline UpdateScriptResult& WithScript(Script&& value) { SetScript(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateScriptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateScriptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateScriptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Script m_script;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
