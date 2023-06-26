/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/ExportDestinationType.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p>The default s3 bucket where Audit Manager saves the files that you export
   * from evidence finder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DefaultExportDestination">AWS
   * API Reference</a></p>
   */
  class DefaultExportDestination
  {
  public:
    AWS_AUDITMANAGER_API DefaultExportDestination();
    AWS_AUDITMANAGER_API DefaultExportDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API DefaultExportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination type, such as Amazon S3.</p>
     */
    inline const ExportDestinationType& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>The destination type, such as Amazon S3.</p>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>The destination type, such as Amazon S3.</p>
     */
    inline void SetDestinationType(const ExportDestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>The destination type, such as Amazon S3.</p>
     */
    inline void SetDestinationType(ExportDestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>The destination type, such as Amazon S3.</p>
     */
    inline DefaultExportDestination& WithDestinationType(const ExportDestinationType& value) { SetDestinationType(value); return *this;}

    /**
     * <p>The destination type, such as Amazon S3.</p>
     */
    inline DefaultExportDestination& WithDestinationType(ExportDestinationType&& value) { SetDestinationType(std::move(value)); return *this;}


    /**
     * <p>The destination bucket where Audit Manager stores exported files.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination bucket where Audit Manager stores exported files.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination bucket where Audit Manager stores exported files.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination bucket where Audit Manager stores exported files.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination bucket where Audit Manager stores exported files.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The destination bucket where Audit Manager stores exported files.</p>
     */
    inline DefaultExportDestination& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination bucket where Audit Manager stores exported files.</p>
     */
    inline DefaultExportDestination& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The destination bucket where Audit Manager stores exported files.</p>
     */
    inline DefaultExportDestination& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    ExportDestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
