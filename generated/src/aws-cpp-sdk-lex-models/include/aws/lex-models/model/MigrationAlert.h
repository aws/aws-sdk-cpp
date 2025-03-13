/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/MigrationAlertType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides information about alerts and warnings that Amazon Lex sends during a
   * migration. The alerts include information about how to resolve the
   * issue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/MigrationAlert">AWS
   * API Reference</a></p>
   */
  class MigrationAlert
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API MigrationAlert() = default;
    AWS_LEXMODELBUILDINGSERVICE_API MigrationAlert(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API MigrationAlert& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of alert. There are two kinds of alerts:</p> <ul> <li> <p>
     * <code>ERROR</code> - There was an issue with the migration that can't be
     * resolved. The migration stops.</p> </li> <li> <p> <code>WARN</code> - There was
     * an issue with the migration that requires manual changes to the new Amazon Lex
     * V2 bot. The migration continues.</p> </li> </ul>
     */
    inline MigrationAlertType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MigrationAlertType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MigrationAlert& WithType(MigrationAlertType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes why the alert was issued.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    MigrationAlert& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details about the alert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Vector<Aws::String>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Vector<Aws::String>>
    MigrationAlert& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsT = Aws::String>
    MigrationAlert& AddDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details.emplace_back(std::forward<DetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferenceURLs() const { return m_referenceURLs; }
    inline bool ReferenceURLsHasBeenSet() const { return m_referenceURLsHasBeenSet; }
    template<typename ReferenceURLsT = Aws::Vector<Aws::String>>
    void SetReferenceURLs(ReferenceURLsT&& value) { m_referenceURLsHasBeenSet = true; m_referenceURLs = std::forward<ReferenceURLsT>(value); }
    template<typename ReferenceURLsT = Aws::Vector<Aws::String>>
    MigrationAlert& WithReferenceURLs(ReferenceURLsT&& value) { SetReferenceURLs(std::forward<ReferenceURLsT>(value)); return *this;}
    template<typename ReferenceURLsT = Aws::String>
    MigrationAlert& AddReferenceURLs(ReferenceURLsT&& value) { m_referenceURLsHasBeenSet = true; m_referenceURLs.emplace_back(std::forward<ReferenceURLsT>(value)); return *this; }
    ///@}
  private:

    MigrationAlertType m_type{MigrationAlertType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_details;
    bool m_detailsHasBeenSet = false;

    Aws::Vector<Aws::String> m_referenceURLs;
    bool m_referenceURLsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
