/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/DataShareStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The association of a datashare from a producer account with a data consumer.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DataShareAssociation">AWS
   * API Reference</a></p>
   */
  class DataShareAssociation
  {
  public:
    AWS_REDSHIFT_API DataShareAssociation();
    AWS_REDSHIFT_API DataShareAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API DataShareAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the consumer accounts that have an association with a producer
     * datashare.</p>
     */
    inline const Aws::String& GetConsumerIdentifier() const{ return m_consumerIdentifier; }

    /**
     * <p>The name of the consumer accounts that have an association with a producer
     * datashare.</p>
     */
    inline bool ConsumerIdentifierHasBeenSet() const { return m_consumerIdentifierHasBeenSet; }

    /**
     * <p>The name of the consumer accounts that have an association with a producer
     * datashare.</p>
     */
    inline void SetConsumerIdentifier(const Aws::String& value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier = value; }

    /**
     * <p>The name of the consumer accounts that have an association with a producer
     * datashare.</p>
     */
    inline void SetConsumerIdentifier(Aws::String&& value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier = std::move(value); }

    /**
     * <p>The name of the consumer accounts that have an association with a producer
     * datashare.</p>
     */
    inline void SetConsumerIdentifier(const char* value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier.assign(value); }

    /**
     * <p>The name of the consumer accounts that have an association with a producer
     * datashare.</p>
     */
    inline DataShareAssociation& WithConsumerIdentifier(const Aws::String& value) { SetConsumerIdentifier(value); return *this;}

    /**
     * <p>The name of the consumer accounts that have an association with a producer
     * datashare.</p>
     */
    inline DataShareAssociation& WithConsumerIdentifier(Aws::String&& value) { SetConsumerIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the consumer accounts that have an association with a producer
     * datashare.</p>
     */
    inline DataShareAssociation& WithConsumerIdentifier(const char* value) { SetConsumerIdentifier(value); return *this;}


    /**
     * <p>The status of the datashare that is associated.</p>
     */
    inline const DataShareStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the datashare that is associated.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the datashare that is associated.</p>
     */
    inline void SetStatus(const DataShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the datashare that is associated.</p>
     */
    inline void SetStatus(DataShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the datashare that is associated.</p>
     */
    inline DataShareAssociation& WithStatus(const DataShareStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the datashare that is associated.</p>
     */
    inline DataShareAssociation& WithStatus(DataShareStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Region of the consumer accounts that have an
     * association with a producer datashare.</p>
     */
    inline const Aws::String& GetConsumerRegion() const{ return m_consumerRegion; }

    /**
     * <p>The Amazon Web Services Region of the consumer accounts that have an
     * association with a producer datashare.</p>
     */
    inline bool ConsumerRegionHasBeenSet() const { return m_consumerRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the consumer accounts that have an
     * association with a producer datashare.</p>
     */
    inline void SetConsumerRegion(const Aws::String& value) { m_consumerRegionHasBeenSet = true; m_consumerRegion = value; }

    /**
     * <p>The Amazon Web Services Region of the consumer accounts that have an
     * association with a producer datashare.</p>
     */
    inline void SetConsumerRegion(Aws::String&& value) { m_consumerRegionHasBeenSet = true; m_consumerRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the consumer accounts that have an
     * association with a producer datashare.</p>
     */
    inline void SetConsumerRegion(const char* value) { m_consumerRegionHasBeenSet = true; m_consumerRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the consumer accounts that have an
     * association with a producer datashare.</p>
     */
    inline DataShareAssociation& WithConsumerRegion(const Aws::String& value) { SetConsumerRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the consumer accounts that have an
     * association with a producer datashare.</p>
     */
    inline DataShareAssociation& WithConsumerRegion(Aws::String&& value) { SetConsumerRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the consumer accounts that have an
     * association with a producer datashare.</p>
     */
    inline DataShareAssociation& WithConsumerRegion(const char* value) { SetConsumerRegion(value); return *this;}


    /**
     * <p>The creation date of the datashare that is associated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The creation date of the datashare that is associated.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The creation date of the datashare that is associated.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The creation date of the datashare that is associated.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The creation date of the datashare that is associated.</p>
     */
    inline DataShareAssociation& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The creation date of the datashare that is associated.</p>
     */
    inline DataShareAssociation& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The status change data of the datashare that is associated.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusChangeDate() const{ return m_statusChangeDate; }

    /**
     * <p>The status change data of the datashare that is associated.</p>
     */
    inline bool StatusChangeDateHasBeenSet() const { return m_statusChangeDateHasBeenSet; }

    /**
     * <p>The status change data of the datashare that is associated.</p>
     */
    inline void SetStatusChangeDate(const Aws::Utils::DateTime& value) { m_statusChangeDateHasBeenSet = true; m_statusChangeDate = value; }

    /**
     * <p>The status change data of the datashare that is associated.</p>
     */
    inline void SetStatusChangeDate(Aws::Utils::DateTime&& value) { m_statusChangeDateHasBeenSet = true; m_statusChangeDate = std::move(value); }

    /**
     * <p>The status change data of the datashare that is associated.</p>
     */
    inline DataShareAssociation& WithStatusChangeDate(const Aws::Utils::DateTime& value) { SetStatusChangeDate(value); return *this;}

    /**
     * <p>The status change data of the datashare that is associated.</p>
     */
    inline DataShareAssociation& WithStatusChangeDate(Aws::Utils::DateTime&& value) { SetStatusChangeDate(std::move(value)); return *this;}

  private:

    Aws::String m_consumerIdentifier;
    bool m_consumerIdentifierHasBeenSet = false;

    DataShareStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_consumerRegion;
    bool m_consumerRegionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_statusChangeDate;
    bool m_statusChangeDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
