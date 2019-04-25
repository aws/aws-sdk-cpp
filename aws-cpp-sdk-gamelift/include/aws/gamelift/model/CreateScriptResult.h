/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Script.h>
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
  class AWS_GAMELIFT_API CreateScriptResult
  {
  public:
    CreateScriptResult();
    CreateScriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateScriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateScriptResult& WithScript(const Script& value) { SetScript(value); return *this;}

    /**
     * <p>The newly created script record with a unique script ID. The new script's
     * storage location reflects an Amazon S3 location: (1) If the script was uploaded
     * from an S3 bucket under your account, the storage location reflects the
     * information that was provided in the <i>CreateScript</i> request; (2) If the
     * script file was uploaded from a local zip file, the storage location reflects an
     * S3 location controls by the Amazon GameLift service.</p>
     */
    inline CreateScriptResult& WithScript(Script&& value) { SetScript(std::move(value)); return *this;}

  private:

    Script m_script;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
