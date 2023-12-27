/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/S3ConfigMap.h>
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
   * <p>Defines the Amazon S3 bucket where the training data for the configured
   * audience is stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AudienceGenerationJobDataSource">AWS
   * API Reference</a></p>
   */
  class AudienceGenerationJobDataSource
  {
  public:
    AWS_CLEANROOMSML_API AudienceGenerationJobDataSource();
    AWS_CLEANROOMSML_API AudienceGenerationJobDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceGenerationJobDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket where the training data for the configured audience is
     * stored.</p>
     */
    inline const S3ConfigMap& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The Amazon S3 bucket where the training data for the configured audience is
     * stored.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket where the training data for the configured audience is
     * stored.</p>
     */
    inline void SetDataSource(const S3ConfigMap& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The Amazon S3 bucket where the training data for the configured audience is
     * stored.</p>
     */
    inline void SetDataSource(S3ConfigMap&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where the training data for the configured audience is
     * stored.</p>
     */
    inline AudienceGenerationJobDataSource& WithDataSource(const S3ConfigMap& value) { SetDataSource(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where the training data for the configured audience is
     * stored.</p>
     */
    inline AudienceGenerationJobDataSource& WithDataSource(S3ConfigMap&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that can read the Amazon S3 bucket where the training
     * data is stored.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that can read the Amazon S3 bucket where the training
     * data is stored.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that can read the Amazon S3 bucket where the training
     * data is stored.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that can read the Amazon S3 bucket where the training
     * data is stored.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that can read the Amazon S3 bucket where the training
     * data is stored.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that can read the Amazon S3 bucket where the training
     * data is stored.</p>
     */
    inline AudienceGenerationJobDataSource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that can read the Amazon S3 bucket where the training
     * data is stored.</p>
     */
    inline AudienceGenerationJobDataSource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that can read the Amazon S3 bucket where the training
     * data is stored.</p>
     */
    inline AudienceGenerationJobDataSource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    S3ConfigMap m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
