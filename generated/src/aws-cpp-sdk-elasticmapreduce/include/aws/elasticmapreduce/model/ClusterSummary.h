/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ClusterStatus.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The summary description of the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ClusterSummary">AWS
   * API Reference</a></p>
   */
  class ClusterSummary
  {
  public:
    AWS_EMR_API ClusterSummary();
    AWS_EMR_API ClusterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline ClusterSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline ClusterSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline ClusterSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline ClusterSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline ClusterSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline ClusterSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The details about the current status of the cluster.</p>
     */
    inline const ClusterStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The details about the current status of the cluster.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The details about the current status of the cluster.</p>
     */
    inline void SetStatus(const ClusterStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The details about the current status of the cluster.</p>
     */
    inline void SetStatus(ClusterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The details about the current status of the cluster.</p>
     */
    inline ClusterSummary& WithStatus(const ClusterStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The details about the current status of the cluster.</p>
     */
    inline ClusterSummary& WithStatus(ClusterStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline int GetNormalizedInstanceHours() const{ return m_normalizedInstanceHours; }

    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline bool NormalizedInstanceHoursHasBeenSet() const { return m_normalizedInstanceHoursHasBeenSet; }

    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline void SetNormalizedInstanceHours(int value) { m_normalizedInstanceHoursHasBeenSet = true; m_normalizedInstanceHours = value; }

    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline ClusterSummary& WithNormalizedInstanceHours(int value) { SetNormalizedInstanceHours(value); return *this;}


    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline ClusterSummary& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline ClusterSummary& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline ClusterSummary& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline ClusterSummary& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline ClusterSummary& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline ClusterSummary& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ClusterStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_normalizedInstanceHours;
    bool m_normalizedInstanceHoursHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
