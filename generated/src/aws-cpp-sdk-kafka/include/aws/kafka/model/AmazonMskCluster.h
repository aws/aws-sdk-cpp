/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * <p>Details of an Amazon MSK Cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/AmazonMskCluster">AWS
   * API Reference</a></p>
   */
  class AmazonMskCluster
  {
  public:
    AWS_KAFKA_API AmazonMskCluster() = default;
    AWS_KAFKA_API AmazonMskCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API AmazonMskCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon MSK cluster.</p>
     */
    inline const Aws::String& GetMskClusterArn() const { return m_mskClusterArn; }
    inline bool MskClusterArnHasBeenSet() const { return m_mskClusterArnHasBeenSet; }
    template<typename MskClusterArnT = Aws::String>
    void SetMskClusterArn(MskClusterArnT&& value) { m_mskClusterArnHasBeenSet = true; m_mskClusterArn = std::forward<MskClusterArnT>(value); }
    template<typename MskClusterArnT = Aws::String>
    AmazonMskCluster& WithMskClusterArn(MskClusterArnT&& value) { SetMskClusterArn(std::forward<MskClusterArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mskClusterArn;
    bool m_mskClusterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
