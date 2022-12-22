/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/FailoverStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the state of scheduled or in-process failover operations on an
   * Aurora global database (<a>GlobalCluster</a>). This Data type is empty unless a
   * failover operation is scheduled or is currently underway on the Aurora global
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverState">AWS
   * API Reference</a></p>
   */
  class FailoverState
  {
  public:
    AWS_RDS_API FailoverState();
    AWS_RDS_API FailoverState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API FailoverState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The current status of the Aurora global database (<a>GlobalCluster</a>).
     * Possible values are as follows:</p> <ul> <li> <p>pending &#x96; A request to
     * fail over the Aurora global database (<a>GlobalCluster</a>) has been received by
     * the service. The <code>GlobalCluster</code>'s primary DB cluster and the
     * specified secondary DB cluster are being verified before the failover process
     * can start.</p> </li> <li> <p>failing-over &#x96; This status covers the range of
     * Aurora internal operations that take place during the failover process, such as
     * demoting the primary Aurora DB cluster, promoting the secondary Aurora DB, and
     * synchronizing replicas.</p> </li> <li> <p>cancelling &#x96; The request to fail
     * over the Aurora global database (<a>GlobalCluster</a>) was cancelled and the
     * primary Aurora DB cluster and the selected secondary Aurora DB cluster are
     * returning to their previous states.</p> </li> </ul>
     */
    inline const FailoverStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Aurora global database (<a>GlobalCluster</a>).
     * Possible values are as follows:</p> <ul> <li> <p>pending &#x96; A request to
     * fail over the Aurora global database (<a>GlobalCluster</a>) has been received by
     * the service. The <code>GlobalCluster</code>'s primary DB cluster and the
     * specified secondary DB cluster are being verified before the failover process
     * can start.</p> </li> <li> <p>failing-over &#x96; This status covers the range of
     * Aurora internal operations that take place during the failover process, such as
     * demoting the primary Aurora DB cluster, promoting the secondary Aurora DB, and
     * synchronizing replicas.</p> </li> <li> <p>cancelling &#x96; The request to fail
     * over the Aurora global database (<a>GlobalCluster</a>) was cancelled and the
     * primary Aurora DB cluster and the selected secondary Aurora DB cluster are
     * returning to their previous states.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the Aurora global database (<a>GlobalCluster</a>).
     * Possible values are as follows:</p> <ul> <li> <p>pending &#x96; A request to
     * fail over the Aurora global database (<a>GlobalCluster</a>) has been received by
     * the service. The <code>GlobalCluster</code>'s primary DB cluster and the
     * specified secondary DB cluster are being verified before the failover process
     * can start.</p> </li> <li> <p>failing-over &#x96; This status covers the range of
     * Aurora internal operations that take place during the failover process, such as
     * demoting the primary Aurora DB cluster, promoting the secondary Aurora DB, and
     * synchronizing replicas.</p> </li> <li> <p>cancelling &#x96; The request to fail
     * over the Aurora global database (<a>GlobalCluster</a>) was cancelled and the
     * primary Aurora DB cluster and the selected secondary Aurora DB cluster are
     * returning to their previous states.</p> </li> </ul>
     */
    inline void SetStatus(const FailoverStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the Aurora global database (<a>GlobalCluster</a>).
     * Possible values are as follows:</p> <ul> <li> <p>pending &#x96; A request to
     * fail over the Aurora global database (<a>GlobalCluster</a>) has been received by
     * the service. The <code>GlobalCluster</code>'s primary DB cluster and the
     * specified secondary DB cluster are being verified before the failover process
     * can start.</p> </li> <li> <p>failing-over &#x96; This status covers the range of
     * Aurora internal operations that take place during the failover process, such as
     * demoting the primary Aurora DB cluster, promoting the secondary Aurora DB, and
     * synchronizing replicas.</p> </li> <li> <p>cancelling &#x96; The request to fail
     * over the Aurora global database (<a>GlobalCluster</a>) was cancelled and the
     * primary Aurora DB cluster and the selected secondary Aurora DB cluster are
     * returning to their previous states.</p> </li> </ul>
     */
    inline void SetStatus(FailoverStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the Aurora global database (<a>GlobalCluster</a>).
     * Possible values are as follows:</p> <ul> <li> <p>pending &#x96; A request to
     * fail over the Aurora global database (<a>GlobalCluster</a>) has been received by
     * the service. The <code>GlobalCluster</code>'s primary DB cluster and the
     * specified secondary DB cluster are being verified before the failover process
     * can start.</p> </li> <li> <p>failing-over &#x96; This status covers the range of
     * Aurora internal operations that take place during the failover process, such as
     * demoting the primary Aurora DB cluster, promoting the secondary Aurora DB, and
     * synchronizing replicas.</p> </li> <li> <p>cancelling &#x96; The request to fail
     * over the Aurora global database (<a>GlobalCluster</a>) was cancelled and the
     * primary Aurora DB cluster and the selected secondary Aurora DB cluster are
     * returning to their previous states.</p> </li> </ul>
     */
    inline FailoverState& WithStatus(const FailoverStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Aurora global database (<a>GlobalCluster</a>).
     * Possible values are as follows:</p> <ul> <li> <p>pending &#x96; A request to
     * fail over the Aurora global database (<a>GlobalCluster</a>) has been received by
     * the service. The <code>GlobalCluster</code>'s primary DB cluster and the
     * specified secondary DB cluster are being verified before the failover process
     * can start.</p> </li> <li> <p>failing-over &#x96; This status covers the range of
     * Aurora internal operations that take place during the failover process, such as
     * demoting the primary Aurora DB cluster, promoting the secondary Aurora DB, and
     * synchronizing replicas.</p> </li> <li> <p>cancelling &#x96; The request to fail
     * over the Aurora global database (<a>GlobalCluster</a>) was cancelled and the
     * primary Aurora DB cluster and the selected secondary Aurora DB cluster are
     * returning to their previous states.</p> </li> </ul>
     */
    inline FailoverState& WithStatus(FailoverStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being demoted, and which is associated with this state.</p>
     */
    inline const Aws::String& GetFromDbClusterArn() const{ return m_fromDbClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being demoted, and which is associated with this state.</p>
     */
    inline bool FromDbClusterArnHasBeenSet() const { return m_fromDbClusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being demoted, and which is associated with this state.</p>
     */
    inline void SetFromDbClusterArn(const Aws::String& value) { m_fromDbClusterArnHasBeenSet = true; m_fromDbClusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being demoted, and which is associated with this state.</p>
     */
    inline void SetFromDbClusterArn(Aws::String&& value) { m_fromDbClusterArnHasBeenSet = true; m_fromDbClusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being demoted, and which is associated with this state.</p>
     */
    inline void SetFromDbClusterArn(const char* value) { m_fromDbClusterArnHasBeenSet = true; m_fromDbClusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being demoted, and which is associated with this state.</p>
     */
    inline FailoverState& WithFromDbClusterArn(const Aws::String& value) { SetFromDbClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being demoted, and which is associated with this state.</p>
     */
    inline FailoverState& WithFromDbClusterArn(Aws::String&& value) { SetFromDbClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being demoted, and which is associated with this state.</p>
     */
    inline FailoverState& WithFromDbClusterArn(const char* value) { SetFromDbClusterArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being promoted, and which is associated with this state.</p>
     */
    inline const Aws::String& GetToDbClusterArn() const{ return m_toDbClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being promoted, and which is associated with this state.</p>
     */
    inline bool ToDbClusterArnHasBeenSet() const { return m_toDbClusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being promoted, and which is associated with this state.</p>
     */
    inline void SetToDbClusterArn(const Aws::String& value) { m_toDbClusterArnHasBeenSet = true; m_toDbClusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being promoted, and which is associated with this state.</p>
     */
    inline void SetToDbClusterArn(Aws::String&& value) { m_toDbClusterArnHasBeenSet = true; m_toDbClusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being promoted, and which is associated with this state.</p>
     */
    inline void SetToDbClusterArn(const char* value) { m_toDbClusterArnHasBeenSet = true; m_toDbClusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being promoted, and which is associated with this state.</p>
     */
    inline FailoverState& WithToDbClusterArn(const Aws::String& value) { SetToDbClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being promoted, and which is associated with this state.</p>
     */
    inline FailoverState& WithToDbClusterArn(Aws::String&& value) { SetToDbClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora DB cluster that is currently
     * being promoted, and which is associated with this state.</p>
     */
    inline FailoverState& WithToDbClusterArn(const char* value) { SetToDbClusterArn(value); return *this;}

  private:

    FailoverStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_fromDbClusterArn;
    bool m_fromDbClusterArnHasBeenSet = false;

    Aws::String m_toDbClusterArn;
    bool m_toDbClusterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
