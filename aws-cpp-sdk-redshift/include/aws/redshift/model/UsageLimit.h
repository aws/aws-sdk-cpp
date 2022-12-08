/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/UsageLimitFeatureType.h>
#include <aws/redshift/model/UsageLimitLimitType.h>
#include <aws/redshift/model/UsageLimitPeriod.h>
#include <aws/redshift/model/UsageLimitBreachAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a usage limit object for a cluster. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/UsageLimit">AWS
   * API Reference</a></p>
   */
  class UsageLimit
  {
  public:
    AWS_REDSHIFT_API UsageLimit();
    AWS_REDSHIFT_API UsageLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API UsageLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline const Aws::String& GetUsageLimitId() const{ return m_usageLimitId; }

    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline bool UsageLimitIdHasBeenSet() const { return m_usageLimitIdHasBeenSet; }

    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline void SetUsageLimitId(const Aws::String& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = value; }

    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline void SetUsageLimitId(Aws::String&& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = std::move(value); }

    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline void SetUsageLimitId(const char* value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId.assign(value); }

    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline UsageLimit& WithUsageLimitId(const Aws::String& value) { SetUsageLimitId(value); return *this;}

    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline UsageLimit& WithUsageLimitId(Aws::String&& value) { SetUsageLimitId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline UsageLimit& WithUsageLimitId(const char* value) { SetUsageLimitId(value); return *this;}


    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline UsageLimit& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline UsageLimit& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline UsageLimit& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Redshift feature to which the limit applies.</p>
     */
    inline const UsageLimitFeatureType& GetFeatureType() const{ return m_featureType; }

    /**
     * <p>The Amazon Redshift feature to which the limit applies.</p>
     */
    inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }

    /**
     * <p>The Amazon Redshift feature to which the limit applies.</p>
     */
    inline void SetFeatureType(const UsageLimitFeatureType& value) { m_featureTypeHasBeenSet = true; m_featureType = value; }

    /**
     * <p>The Amazon Redshift feature to which the limit applies.</p>
     */
    inline void SetFeatureType(UsageLimitFeatureType&& value) { m_featureTypeHasBeenSet = true; m_featureType = std::move(value); }

    /**
     * <p>The Amazon Redshift feature to which the limit applies.</p>
     */
    inline UsageLimit& WithFeatureType(const UsageLimitFeatureType& value) { SetFeatureType(value); return *this;}

    /**
     * <p>The Amazon Redshift feature to which the limit applies.</p>
     */
    inline UsageLimit& WithFeatureType(UsageLimitFeatureType&& value) { SetFeatureType(std::move(value)); return *this;}


    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size.</p>
     */
    inline const UsageLimitLimitType& GetLimitType() const{ return m_limitType; }

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size.</p>
     */
    inline bool LimitTypeHasBeenSet() const { return m_limitTypeHasBeenSet; }

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size.</p>
     */
    inline void SetLimitType(const UsageLimitLimitType& value) { m_limitTypeHasBeenSet = true; m_limitType = value; }

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size.</p>
     */
    inline void SetLimitType(UsageLimitLimitType&& value) { m_limitTypeHasBeenSet = true; m_limitType = std::move(value); }

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size.</p>
     */
    inline UsageLimit& WithLimitType(const UsageLimitLimitType& value) { SetLimitType(value); return *this;}

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size.</p>
     */
    inline UsageLimit& WithLimitType(UsageLimitLimitType&& value) { SetLimitType(std::move(value)); return *this;}


    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB).</p>
     */
    inline long long GetAmount() const{ return m_amount; }

    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB).</p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB).</p>
     */
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB).</p>
     */
    inline UsageLimit& WithAmount(long long value) { SetAmount(value); return *this;}


    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline const UsageLimitPeriod& GetPeriod() const{ return m_period; }

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline void SetPeriod(const UsageLimitPeriod& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline void SetPeriod(UsageLimitPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline UsageLimit& WithPeriod(const UsageLimitPeriod& value) { SetPeriod(value); return *this;}

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline UsageLimit& WithPeriod(UsageLimitPeriod&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. Possible
     * values are: </p> <ul> <li> <p> <b>log</b> - To log an event in a system table.
     * The default is log.</p> </li> <li> <p> <b>emit-metric</b> - To emit CloudWatch
     * metrics.</p> </li> <li> <p> <b>disable</b> - To disable the feature until the
     * next usage period begins.</p> </li> </ul>
     */
    inline const UsageLimitBreachAction& GetBreachAction() const{ return m_breachAction; }

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. Possible
     * values are: </p> <ul> <li> <p> <b>log</b> - To log an event in a system table.
     * The default is log.</p> </li> <li> <p> <b>emit-metric</b> - To emit CloudWatch
     * metrics.</p> </li> <li> <p> <b>disable</b> - To disable the feature until the
     * next usage period begins.</p> </li> </ul>
     */
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. Possible
     * values are: </p> <ul> <li> <p> <b>log</b> - To log an event in a system table.
     * The default is log.</p> </li> <li> <p> <b>emit-metric</b> - To emit CloudWatch
     * metrics.</p> </li> <li> <p> <b>disable</b> - To disable the feature until the
     * next usage period begins.</p> </li> </ul>
     */
    inline void SetBreachAction(const UsageLimitBreachAction& value) { m_breachActionHasBeenSet = true; m_breachAction = value; }

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. Possible
     * values are: </p> <ul> <li> <p> <b>log</b> - To log an event in a system table.
     * The default is log.</p> </li> <li> <p> <b>emit-metric</b> - To emit CloudWatch
     * metrics.</p> </li> <li> <p> <b>disable</b> - To disable the feature until the
     * next usage period begins.</p> </li> </ul>
     */
    inline void SetBreachAction(UsageLimitBreachAction&& value) { m_breachActionHasBeenSet = true; m_breachAction = std::move(value); }

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. Possible
     * values are: </p> <ul> <li> <p> <b>log</b> - To log an event in a system table.
     * The default is log.</p> </li> <li> <p> <b>emit-metric</b> - To emit CloudWatch
     * metrics.</p> </li> <li> <p> <b>disable</b> - To disable the feature until the
     * next usage period begins.</p> </li> </ul>
     */
    inline UsageLimit& WithBreachAction(const UsageLimitBreachAction& value) { SetBreachAction(value); return *this;}

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. Possible
     * values are: </p> <ul> <li> <p> <b>log</b> - To log an event in a system table.
     * The default is log.</p> </li> <li> <p> <b>emit-metric</b> - To emit CloudWatch
     * metrics.</p> </li> <li> <p> <b>disable</b> - To disable the feature until the
     * next usage period begins.</p> </li> </ul>
     */
    inline UsageLimit& WithBreachAction(UsageLimitBreachAction&& value) { SetBreachAction(std::move(value)); return *this;}


    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tag instances.</p>
     */
    inline UsageLimit& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline UsageLimit& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline UsageLimit& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline UsageLimit& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline UsageLimit& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UsageLimit& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_usageLimitId;
    bool m_usageLimitIdHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    UsageLimitFeatureType m_featureType;
    bool m_featureTypeHasBeenSet = false;

    UsageLimitLimitType m_limitType;
    bool m_limitTypeHasBeenSet = false;

    long long m_amount;
    bool m_amountHasBeenSet = false;

    UsageLimitPeriod m_period;
    bool m_periodHasBeenSet = false;

    UsageLimitBreachAction m_breachAction;
    bool m_breachActionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
