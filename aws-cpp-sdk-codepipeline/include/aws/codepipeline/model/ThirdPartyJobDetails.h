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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ThirdPartyJobData.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The details of a job sent in response to a
   * <code>GetThirdPartyJobDetails</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ThirdPartyJobDetails">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ThirdPartyJobDetails
  {
  public:
    ThirdPartyJobDetails();
    ThirdPartyJobDetails(Aws::Utils::Json::JsonView jsonValue);
    ThirdPartyJobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier used to identify the job details in AWS CodePipeline.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier used to identify the job details in AWS CodePipeline.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier used to identify the job details in AWS CodePipeline.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier used to identify the job details in AWS CodePipeline.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier used to identify the job details in AWS CodePipeline.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier used to identify the job details in AWS CodePipeline.</p>
     */
    inline ThirdPartyJobDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier used to identify the job details in AWS CodePipeline.</p>
     */
    inline ThirdPartyJobDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier used to identify the job details in AWS CodePipeline.</p>
     */
    inline ThirdPartyJobDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The data to be returned by the third party job worker.</p>
     */
    inline const ThirdPartyJobData& GetData() const{ return m_data; }

    /**
     * <p>The data to be returned by the third party job worker.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The data to be returned by the third party job worker.</p>
     */
    inline void SetData(const ThirdPartyJobData& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data to be returned by the third party job worker.</p>
     */
    inline void SetData(ThirdPartyJobData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The data to be returned by the third party job worker.</p>
     */
    inline ThirdPartyJobDetails& WithData(const ThirdPartyJobData& value) { SetData(value); return *this;}

    /**
     * <p>The data to be returned by the third party job worker.</p>
     */
    inline ThirdPartyJobDetails& WithData(ThirdPartyJobData&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeThirdPartyJob</a> request.</p>
     */
    inline const Aws::String& GetNonce() const{ return m_nonce; }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeThirdPartyJob</a> request.</p>
     */
    inline bool NonceHasBeenSet() const { return m_nonceHasBeenSet; }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeThirdPartyJob</a> request.</p>
     */
    inline void SetNonce(const Aws::String& value) { m_nonceHasBeenSet = true; m_nonce = value; }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeThirdPartyJob</a> request.</p>
     */
    inline void SetNonce(Aws::String&& value) { m_nonceHasBeenSet = true; m_nonce = std::move(value); }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeThirdPartyJob</a> request.</p>
     */
    inline void SetNonce(const char* value) { m_nonceHasBeenSet = true; m_nonce.assign(value); }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeThirdPartyJob</a> request.</p>
     */
    inline ThirdPartyJobDetails& WithNonce(const Aws::String& value) { SetNonce(value); return *this;}

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeThirdPartyJob</a> request.</p>
     */
    inline ThirdPartyJobDetails& WithNonce(Aws::String&& value) { SetNonce(std::move(value)); return *this;}

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeThirdPartyJob</a> request.</p>
     */
    inline ThirdPartyJobDetails& WithNonce(const char* value) { SetNonce(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    ThirdPartyJobData m_data;
    bool m_dataHasBeenSet;

    Aws::String m_nonce;
    bool m_nonceHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
