/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ResponseMetadata.h>
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
   * <p>This data type is used as a response element in the
   * <code>DescribeDBClusterBacktracks</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterBacktrack">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBClusterBacktrack
  {
  public:
    DBClusterBacktrack();
    DBClusterBacktrack(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBClusterBacktrack& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline DBClusterBacktrack& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline DBClusterBacktrack& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline DBClusterBacktrack& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline const Aws::String& GetBacktrackIdentifier() const{ return m_backtrackIdentifier; }

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline bool BacktrackIdentifierHasBeenSet() const { return m_backtrackIdentifierHasBeenSet; }

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline void SetBacktrackIdentifier(const Aws::String& value) { m_backtrackIdentifierHasBeenSet = true; m_backtrackIdentifier = value; }

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline void SetBacktrackIdentifier(Aws::String&& value) { m_backtrackIdentifierHasBeenSet = true; m_backtrackIdentifier = std::move(value); }

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline void SetBacktrackIdentifier(const char* value) { m_backtrackIdentifierHasBeenSet = true; m_backtrackIdentifier.assign(value); }

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline DBClusterBacktrack& WithBacktrackIdentifier(const Aws::String& value) { SetBacktrackIdentifier(value); return *this;}

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline DBClusterBacktrack& WithBacktrackIdentifier(Aws::String&& value) { SetBacktrackIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline DBClusterBacktrack& WithBacktrackIdentifier(const char* value) { SetBacktrackIdentifier(value); return *this;}


    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackTo() const{ return m_backtrackTo; }

    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline bool BacktrackToHasBeenSet() const { return m_backtrackToHasBeenSet; }

    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline void SetBacktrackTo(const Aws::Utils::DateTime& value) { m_backtrackToHasBeenSet = true; m_backtrackTo = value; }

    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline void SetBacktrackTo(Aws::Utils::DateTime&& value) { m_backtrackToHasBeenSet = true; m_backtrackTo = std::move(value); }

    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline DBClusterBacktrack& WithBacktrackTo(const Aws::Utils::DateTime& value) { SetBacktrackTo(value); return *this;}

    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline DBClusterBacktrack& WithBacktrackTo(Aws::Utils::DateTime&& value) { SetBacktrackTo(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackedFrom() const{ return m_backtrackedFrom; }

    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline bool BacktrackedFromHasBeenSet() const { return m_backtrackedFromHasBeenSet; }

    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline void SetBacktrackedFrom(const Aws::Utils::DateTime& value) { m_backtrackedFromHasBeenSet = true; m_backtrackedFrom = value; }

    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline void SetBacktrackedFrom(Aws::Utils::DateTime&& value) { m_backtrackedFromHasBeenSet = true; m_backtrackedFrom = std::move(value); }

    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline DBClusterBacktrack& WithBacktrackedFrom(const Aws::Utils::DateTime& value) { SetBacktrackedFrom(value); return *this;}

    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline DBClusterBacktrack& WithBacktrackedFrom(Aws::Utils::DateTime&& value) { SetBacktrackedFrom(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackRequestCreationTime() const{ return m_backtrackRequestCreationTime; }

    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline bool BacktrackRequestCreationTimeHasBeenSet() const { return m_backtrackRequestCreationTimeHasBeenSet; }

    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline void SetBacktrackRequestCreationTime(const Aws::Utils::DateTime& value) { m_backtrackRequestCreationTimeHasBeenSet = true; m_backtrackRequestCreationTime = value; }

    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline void SetBacktrackRequestCreationTime(Aws::Utils::DateTime&& value) { m_backtrackRequestCreationTimeHasBeenSet = true; m_backtrackRequestCreationTime = std::move(value); }

    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline DBClusterBacktrack& WithBacktrackRequestCreationTime(const Aws::Utils::DateTime& value) { SetBacktrackRequestCreationTime(value); return *this;}

    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline DBClusterBacktrack& WithBacktrackRequestCreationTime(Aws::Utils::DateTime&& value) { SetBacktrackRequestCreationTime(std::move(value)); return *this;}


    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline DBClusterBacktrack& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline DBClusterBacktrack& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline DBClusterBacktrack& WithStatus(const char* value) { SetStatus(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline DBClusterBacktrack& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DBClusterBacktrack& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_backtrackIdentifier;
    bool m_backtrackIdentifierHasBeenSet;

    Aws::Utils::DateTime m_backtrackTo;
    bool m_backtrackToHasBeenSet;

    Aws::Utils::DateTime m_backtrackedFrom;
    bool m_backtrackedFromHasBeenSet;

    Aws::Utils::DateTime m_backtrackRequestCreationTime;
    bool m_backtrackRequestCreationTimeHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
