/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/AudienceDestination.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Configuration information necessary for the configure audience model
   * output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ConfiguredAudienceModelOutputConfig">AWS
   * API Reference</a></p>
   */
  class ConfiguredAudienceModelOutputConfig
  {
  public:
    AWS_CLEANROOMSML_API ConfiguredAudienceModelOutputConfig();
    AWS_CLEANROOMSML_API ConfiguredAudienceModelOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ConfiguredAudienceModelOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AudienceDestination& GetDestination() const{ return m_destination; }

    
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    
    inline void SetDestination(const AudienceDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    
    inline void SetDestination(AudienceDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    
    inline ConfiguredAudienceModelOutputConfig& WithDestination(const AudienceDestination& value) { SetDestination(value); return *this;}

    
    inline ConfiguredAudienceModelOutputConfig& WithDestination(AudienceDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that can write the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that can write the Amazon S3 bucket.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that can write the Amazon S3 bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that can write the Amazon S3 bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that can write the Amazon S3 bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that can write the Amazon S3 bucket.</p>
     */
    inline ConfiguredAudienceModelOutputConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that can write the Amazon S3 bucket.</p>
     */
    inline ConfiguredAudienceModelOutputConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that can write the Amazon S3 bucket.</p>
     */
    inline ConfiguredAudienceModelOutputConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    AudienceDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
