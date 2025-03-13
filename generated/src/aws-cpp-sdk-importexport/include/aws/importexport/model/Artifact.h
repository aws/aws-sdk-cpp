/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace ImportExport
{
namespace Model
{

  /**
   * A discrete item that contains the description and URL of an artifact (such as a
   * PDF).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/Artifact">AWS
   * API Reference</a></p>
   */
  class Artifact
  {
  public:
    AWS_IMPORTEXPORT_API Artifact() = default;
    AWS_IMPORTEXPORT_API Artifact(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IMPORTEXPORT_API Artifact& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IMPORTEXPORT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IMPORTEXPORT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Artifact& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetURL() const { return m_uRL; }
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }
    template<typename URLT = Aws::String>
    void SetURL(URLT&& value) { m_uRLHasBeenSet = true; m_uRL = std::forward<URLT>(value); }
    template<typename URLT = Aws::String>
    Artifact& WithURL(URLT&& value) { SetURL(std::forward<URLT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_uRL;
    bool m_uRLHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
