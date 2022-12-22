/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ScanFilePath.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains files infected with the given threat providing details of malware
   * name and severity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanThreatName">AWS
   * API Reference</a></p>
   */
  class ScanThreatName
  {
  public:
    AWS_GUARDDUTY_API ScanThreatName();
    AWS_GUARDDUTY_API ScanThreatName(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanThreatName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the identified threat.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the identified threat.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the identified threat.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the identified threat.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the identified threat.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the identified threat.</p>
     */
    inline ScanThreatName& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the identified threat.</p>
     */
    inline ScanThreatName& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the identified threat.</p>
     */
    inline ScanThreatName& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Severity of threat identified as part of the malware scan.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>Severity of threat identified as part of the malware scan.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>Severity of threat identified as part of the malware scan.</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>Severity of threat identified as part of the malware scan.</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>Severity of threat identified as part of the malware scan.</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>Severity of threat identified as part of the malware scan.</p>
     */
    inline ScanThreatName& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>Severity of threat identified as part of the malware scan.</p>
     */
    inline ScanThreatName& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>Severity of threat identified as part of the malware scan.</p>
     */
    inline ScanThreatName& WithSeverity(const char* value) { SetSeverity(value); return *this;}


    /**
     * <p>Total number of files infected with given threat.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * <p>Total number of files infected with given threat.</p>
     */
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }

    /**
     * <p>Total number of files infected with given threat.</p>
     */
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>Total number of files infected with given threat.</p>
     */
    inline ScanThreatName& WithItemCount(int value) { SetItemCount(value); return *this;}


    /**
     * <p>List of infected files in EBS volume with details.</p>
     */
    inline const Aws::Vector<ScanFilePath>& GetFilePaths() const{ return m_filePaths; }

    /**
     * <p>List of infected files in EBS volume with details.</p>
     */
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }

    /**
     * <p>List of infected files in EBS volume with details.</p>
     */
    inline void SetFilePaths(const Aws::Vector<ScanFilePath>& value) { m_filePathsHasBeenSet = true; m_filePaths = value; }

    /**
     * <p>List of infected files in EBS volume with details.</p>
     */
    inline void SetFilePaths(Aws::Vector<ScanFilePath>&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::move(value); }

    /**
     * <p>List of infected files in EBS volume with details.</p>
     */
    inline ScanThreatName& WithFilePaths(const Aws::Vector<ScanFilePath>& value) { SetFilePaths(value); return *this;}

    /**
     * <p>List of infected files in EBS volume with details.</p>
     */
    inline ScanThreatName& WithFilePaths(Aws::Vector<ScanFilePath>&& value) { SetFilePaths(std::move(value)); return *this;}

    /**
     * <p>List of infected files in EBS volume with details.</p>
     */
    inline ScanThreatName& AddFilePaths(const ScanFilePath& value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(value); return *this; }

    /**
     * <p>List of infected files in EBS volume with details.</p>
     */
    inline ScanThreatName& AddFilePaths(ScanFilePath&& value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    int m_itemCount;
    bool m_itemCountHasBeenSet = false;

    Aws::Vector<ScanFilePath> m_filePaths;
    bool m_filePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
