/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Details about a custom plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CustomPluginDescription">AWS
   * API Reference</a></p>
   */
  class CustomPluginDescription
  {
  public:
    AWS_KAFKACONNECT_API CustomPluginDescription();
    AWS_KAFKACONNECT_API CustomPluginDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CustomPluginDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const{ return m_customPluginArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline bool CustomPluginArnHasBeenSet() const { return m_customPluginArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline void SetCustomPluginArn(const Aws::String& value) { m_customPluginArnHasBeenSet = true; m_customPluginArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline void SetCustomPluginArn(Aws::String&& value) { m_customPluginArnHasBeenSet = true; m_customPluginArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline void SetCustomPluginArn(const char* value) { m_customPluginArnHasBeenSet = true; m_customPluginArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline CustomPluginDescription& WithCustomPluginArn(const Aws::String& value) { SetCustomPluginArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline CustomPluginDescription& WithCustomPluginArn(Aws::String&& value) { SetCustomPluginArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline CustomPluginDescription& WithCustomPluginArn(const char* value) { SetCustomPluginArn(value); return *this;}


    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline long long GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline CustomPluginDescription& WithRevision(long long value) { SetRevision(value); return *this;}

  private:

    Aws::String m_customPluginArn;
    bool m_customPluginArnHasBeenSet = false;

    long long m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
