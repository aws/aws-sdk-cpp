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
    AWS_GUARDDUTY_API ScanThreatName() = default;
    AWS_GUARDDUTY_API ScanThreatName(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanThreatName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the identified threat.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScanThreatName& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Severity of threat identified as part of the malware scan.</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    ScanThreatName& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of files infected with given threat.</p>
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline ScanThreatName& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of infected files in EBS volume with details.</p>
     */
    inline const Aws::Vector<ScanFilePath>& GetFilePaths() const { return m_filePaths; }
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }
    template<typename FilePathsT = Aws::Vector<ScanFilePath>>
    void SetFilePaths(FilePathsT&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::forward<FilePathsT>(value); }
    template<typename FilePathsT = Aws::Vector<ScanFilePath>>
    ScanThreatName& WithFilePaths(FilePathsT&& value) { SetFilePaths(std::forward<FilePathsT>(value)); return *this;}
    template<typename FilePathsT = ScanFilePath>
    ScanThreatName& AddFilePaths(FilePathsT&& value) { m_filePathsHasBeenSet = true; m_filePaths.emplace_back(std::forward<FilePathsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    int m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    Aws::Vector<ScanFilePath> m_filePaths;
    bool m_filePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
