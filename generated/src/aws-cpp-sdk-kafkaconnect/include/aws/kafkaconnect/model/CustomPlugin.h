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
   * <p>A plugin is an Amazon Web Services resource that contains the code that
   * defines a connector's logic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CustomPlugin">AWS
   * API Reference</a></p>
   */
  class CustomPlugin
  {
  public:
    AWS_KAFKACONNECT_API CustomPlugin() = default;
    AWS_KAFKACONNECT_API CustomPlugin(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CustomPlugin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const { return m_customPluginArn; }
    inline bool CustomPluginArnHasBeenSet() const { return m_customPluginArnHasBeenSet; }
    template<typename CustomPluginArnT = Aws::String>
    void SetCustomPluginArn(CustomPluginArnT&& value) { m_customPluginArnHasBeenSet = true; m_customPluginArn = std::forward<CustomPluginArnT>(value); }
    template<typename CustomPluginArnT = Aws::String>
    CustomPlugin& WithCustomPluginArn(CustomPluginArnT&& value) { SetCustomPluginArn(std::forward<CustomPluginArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline long long GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline CustomPlugin& WithRevision(long long value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_customPluginArn;
    bool m_customPluginArnHasBeenSet = false;

    long long m_revision{0};
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
