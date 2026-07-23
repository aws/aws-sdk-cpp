/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/Expression.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace BCMPricingCalculator {
namespace Model {

Expression::Expression(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Expression& Expression::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  if (decoder != nullptr) {
    auto initialMapType = decoder->PeekType();
    if (initialMapType.has_value() && (initialMapType.value() == CborType::MapStart || initialMapType.value() == CborType::IndefMapStart)) {
      if (initialMapType.value() == CborType::MapStart) {
        auto mapSize = decoder->PopNextMapStart();
        if (mapSize.has_value()) {
          for (size_t i = 0; i < mapSize.value(); ++i) {
            auto initialKey = decoder->PopNextTextVal();
            if (initialKey.has_value()) {
              Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

              if (initialKeyStr == "and") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_and.push_back(Expression(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_and.push_back(Expression(decoder));
                    }
                  }
                }
                m_andHasBeenSet = true;
              }

              else if (initialKeyStr == "or") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_or.push_back(Expression(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_or.push_back(Expression(decoder));
                    }
                  }
                }
                m_orHasBeenSet = true;
              }

              else if (initialKeyStr == "not") {
                m_not = Aws::MakeShared<Expression>("Expression", Expression(decoder));
                m_notHasBeenSet = true;
              }

              else if (initialKeyStr == "costCategories") {
                m_costCategories = ExpressionFilter(decoder);
                m_costCategoriesHasBeenSet = true;
              }

              else if (initialKeyStr == "dimensions") {
                m_dimensions = ExpressionFilter(decoder);
                m_dimensionsHasBeenSet = true;
              }

              else if (initialKeyStr == "tags") {
                m_tags = ExpressionFilter(decoder);
                m_tagsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Expression", "Invalid data received for %s", initialKeyStr.c_str());
                break;
              }
            }
          }
        }
      } else  // IndefMapStart
      {
        decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
          auto outerMapNextType = decoder->PeekType();
          if (!outerMapNextType.has_value() || outerMapNextType.value() == CborType::Break) {
            if (outerMapNextType.has_value()) {
              decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
          }

          auto initialKey = decoder->PopNextTextVal();
          if (initialKey.has_value()) {
            Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

            if (initialKeyStr == "and") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_and.push_back(Expression(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_and.push_back(Expression(decoder));
                  }
                }
              }
              m_andHasBeenSet = true;
            }

            else if (initialKeyStr == "or") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_or.push_back(Expression(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_or.push_back(Expression(decoder));
                  }
                }
              }
              m_orHasBeenSet = true;
            }

            else if (initialKeyStr == "not") {
              m_not = Aws::MakeShared<Expression>("Expression", Expression(decoder));
              m_notHasBeenSet = true;
            }

            else if (initialKeyStr == "costCategories") {
              m_costCategories = ExpressionFilter(decoder);
              m_costCategoriesHasBeenSet = true;
            }

            else if (initialKeyStr == "dimensions") {
              m_dimensions = ExpressionFilter(decoder);
              m_dimensionsHasBeenSet = true;
            }

            else if (initialKeyStr == "tags") {
              m_tags = ExpressionFilter(decoder);
              m_tagsHasBeenSet = true;
            } else {
              // Unknown key, skip the value
              decoder->ConsumeNextWholeDataItem();
            }
          }
        }
      }
    }
  }

  return *this;
}

void Expression::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_andHasBeenSet) {
    mapSize++;
  }
  if (m_orHasBeenSet) {
    mapSize++;
  }
  if (m_notHasBeenSet) {
    mapSize++;
  }
  if (m_costCategoriesHasBeenSet) {
    mapSize++;
  }
  if (m_dimensionsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_andHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("and"));
    encoder.WriteArrayStart(m_and.size());
    for (const auto& item_0 : m_and) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_orHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("or"));
    encoder.WriteArrayStart(m_or.size());
    for (const auto& item_0 : m_or) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_notHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("not"));
    m_not->CborEncode(encoder);
  }

  if (m_costCategoriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("costCategories"));
    m_costCategories.CborEncode(encoder);
  }

  if (m_dimensionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("dimensions"));
    m_dimensions.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    m_tags.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws