/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The proposed access control configuration for a DynamoDB stream. You can
   * propose a configuration for a new DynamoDB stream or an existing DynamoDB stream
   * that you own by specifying the policy for the DynamoDB stream. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_PutResourcePolicy.html">PutResourcePolicy</a>.</p>
   * <ul> <li> <p>If the configuration is for an existing DynamoDB stream and you do
   * not specify the DynamoDB policy, then the access preview uses the existing
   * DynamoDB policy for the stream.</p> </li> <li> <p>If the access preview is for a
   * new resource and you do not specify the policy, then the access preview assumes
   * a DynamoDB stream without a policy.</p> </li> <li> <p>To propose deletion of an
   * existing DynamoDB stream policy, you can specify an empty string for the
   * DynamoDB policy.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DynamodbStreamConfiguration">AWS
   * API Reference</a></p>
   */
  class DynamodbStreamConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API DynamodbStreamConfiguration();
    AWS_ACCESSANALYZER_API DynamodbStreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API DynamodbStreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The proposed resource policy defining who can access or manage the DynamoDB
     * stream.</p>
     */
    inline const Aws::String& GetStreamPolicy() const{ return m_streamPolicy; }

    /**
     * <p>The proposed resource policy defining who can access or manage the DynamoDB
     * stream.</p>
     */
    inline bool StreamPolicyHasBeenSet() const { return m_streamPolicyHasBeenSet; }

    /**
     * <p>The proposed resource policy defining who can access or manage the DynamoDB
     * stream.</p>
     */
    inline void SetStreamPolicy(const Aws::String& value) { m_streamPolicyHasBeenSet = true; m_streamPolicy = value; }

    /**
     * <p>The proposed resource policy defining who can access or manage the DynamoDB
     * stream.</p>
     */
    inline void SetStreamPolicy(Aws::String&& value) { m_streamPolicyHasBeenSet = true; m_streamPolicy = std::move(value); }

    /**
     * <p>The proposed resource policy defining who can access or manage the DynamoDB
     * stream.</p>
     */
    inline void SetStreamPolicy(const char* value) { m_streamPolicyHasBeenSet = true; m_streamPolicy.assign(value); }

    /**
     * <p>The proposed resource policy defining who can access or manage the DynamoDB
     * stream.</p>
     */
    inline DynamodbStreamConfiguration& WithStreamPolicy(const Aws::String& value) { SetStreamPolicy(value); return *this;}

    /**
     * <p>The proposed resource policy defining who can access or manage the DynamoDB
     * stream.</p>
     */
    inline DynamodbStreamConfiguration& WithStreamPolicy(Aws::String&& value) { SetStreamPolicy(std::move(value)); return *this;}

    /**
     * <p>The proposed resource policy defining who can access or manage the DynamoDB
     * stream.</p>
     */
    inline DynamodbStreamConfiguration& WithStreamPolicy(const char* value) { SetStreamPolicy(value); return *this;}

  private:

    Aws::String m_streamPolicy;
    bool m_streamPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
